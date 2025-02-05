// Copyright Priyanshu Shukla

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	FTimerHandle PlayerStateTimerHandle;

	

	/* Begin~ CombatInterface */
	virtual int32 GetPlayerLevel() override;
	/* End~ CombatInterface */
	
private:
	virtual void InitializeAbilityActorInfo() override;
};
