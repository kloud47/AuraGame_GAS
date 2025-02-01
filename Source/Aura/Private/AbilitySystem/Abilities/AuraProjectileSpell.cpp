// Copyright Priyanshu Shukla


#include "AbilitySystem/Abilities/AuraProjectileSpell.h"

#include "Actor/AuraProjectile.h"
#include "Interactions/CombatInterface.h"


void UAuraProjectileSpell::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                           const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	const bool IsServer = HasAuthority(&ActivationInfo);
	if (!IsServer) return;

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(GetAvatarActorFromActorInfo());
	if (CombatInterface)
	{
		const FVector SocketLocation =  CombatInterface->GetCombatSocketLocation();

		FTransform SpawnTransform;
		SpawnTransform.SetLocation(SocketLocation);
		// Set The Projectile Rotation:
		
        AAuraProjectile* Projectile = GetWorld()->SpawnActorDeferred<AAuraProjectile>(
        	ProjectileClass,
        	SpawnTransform,
        	GetOwningActorFromActorInfo(),
        	Cast<APawn>(GetOwningActorFromActorInfo()),
        	ESpawnActorCollisionHandlingMethod::AlwaysSpawn
        	);

		// Give Projectile a gameplay Effect Spec for causing Damage:
		
		Projectile->FinishSpawning(SpawnTransform);
	}
}
