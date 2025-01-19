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

	/* <ITargetInterface> */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/* </ITargetInterface> */
protected:
	virtual void BeginPlay() override;
};
