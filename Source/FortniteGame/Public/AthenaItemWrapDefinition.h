// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaItemWrapDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaItemWrapDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere)
	FSoftClassPath                           ItemWrapModifierBlueprint;
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInstance>        ItemWrapMaterial;
	

 
};








