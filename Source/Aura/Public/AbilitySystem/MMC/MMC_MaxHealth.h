// Copyright Priyanshu Shukla

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_MaxHealth.generated.h"


UCLASS()
class AURA_API UMMC_MaxHealth : public UGameplayModMagnitudeCalculation
// This base class provides the framework for defining custom logic to calculate the magnitude of Gameplay Effects
{
	GENERATED_BODY()
public:
	UMMC_MaxHealth();

	// This is the specific function name that must be implemented to define how the magnitude is calculated
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition VigorDef;
};
