// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortAlteration.h"
#include "FFortSpecializationSlot.h"
#include "Styling/SlateBrush.h"
#include "CustomCharacterPart.h"
#include "FHeroSpecializationAttributeRequirement.h"
#include "FortHeroSpecialization.generated.h"

UCLASS()
class UFortHeroSpecialization : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	TArray<FFortSpecializationSlot> SpecializationSlots;

	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UCustomCharacterPart>> CharacterParts;

	UPROPERTY(EditAnywhere)
	EFortAlteration AlterationType;       

	UPROPERTY(EditAnywhere)
		TArray<FHeroSpecializationAttributeRequirement> AttributeRequirements;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer RequiredTags;     

	UPROPERTY(EditAnywhere)
	bool	bForceShowHeadAccessory; 

	UPROPERTY(EditAnywhere)
	bool	bForceShowBackpack;     

	UPROPERTY(EditAnywhere)
	FSlateBrush CardIconBrush;                              
};
