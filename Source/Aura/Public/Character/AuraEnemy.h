// Copyright Priyanshu Shukla

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interactions/TargetInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public ITargetInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();

	/* Begin~ TargetInterface */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/* End~ TargetInterface */

	/* Begin~ CombatInterface */
	virtual int32 GetPlayerLevel() override;
	/* End~ CombatInterface */
	
protected:
	virtual void BeginPlay() override;
	virtual void InitializeAbilityActorInfo() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;
};
