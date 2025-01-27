// Copyright Priyanshu Shukla


#include "AbilitySystem/AuraAbilitySystemComponent.h"

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	// Called Whenever effect is applied to the character: FGameplayEffectSpec & FActiveGameplayEffectHandle Information passed to The Delegate
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAuraAbilitySystemComponent::EffectApplied);
}

void UAuraAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* ASC, const FGameplayEffectSpec& EffectSpec,
                                                FActiveGameplayEffectHandle ActiveEffectHandle)// Get All information about the effect at runtime and can modify or remove that effect accordingly:
{
	// GEngine->AddOnScreenDebugMessage(1, 8.f, FColor::Red, FString("EffectApplied for AbilitySystemComponent"));
	FGameplayTagContainer TagContainer;
	EffectSpec.GetAllAssetTags(TagContainer);// Stores All the Tags in TagContainer:

	EffectAssetTags.Broadcast(TagContainer);// Broadcast tags to Widget Controller:
}
