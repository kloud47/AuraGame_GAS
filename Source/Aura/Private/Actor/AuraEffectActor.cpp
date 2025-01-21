// Copyright Priyanshu Shukla


#include "Actor/AuraEffectActor.h"

#include "AbilitySystemInterface.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;
	
}

void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();

}

