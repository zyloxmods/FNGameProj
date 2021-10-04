// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortCustomGender.h"
#include "GameplayTags.h"
#include "AthenaCosmeticItemDefinition.h"
#include "FortHeroType.h"
#include "MarshalledVFX_AuthoredDataConfig.h"
#include "EFortCustomPartType.h"
#include "AthenaCharacterItemDefinitiontes.generated.h"


UCLASS()
class FORTNITEGAME_API UAthenaCharacterItemDefinitiontes : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TMap<FName, UObject*> RequestedDataStores; 

	UPROPERTY(EditAnywhere)
	 TMap<EFortCustomPartType, UMarshalledVFX_AuthoredDataConfig*> AuthoredVFXData_ByPart; //this is red because its needs to be included many times you also need to recreate them like im doin here

	UPROPERTY(EditAnywhere)
	 UFortHeroType* HeroDefinition; 

	UPROPERTY(EditAnywhere)
	 UAthenaBackpackItemDefinition* DefaultBackpack; 

	UPROPERTY(EditAnywhere)
	 TArray<UAthenaCosmeticItemDefinition*> RequiredCosmeticItems;

	UPROPERTY(EditAnywhere)
		TEnumAsByte<Enums::EFortCustomGender> Gender;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath FeedbackBank;

	 //UPROPERTY(EditAnywhere)
	 //TMap< FGameplayTag, FAthenaCharacterTaggedPartsList> TaggedPartsOverride; 
};
