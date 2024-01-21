// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "FortniteGame/FortniteGame.h"
#include "FortniteGame/Public/Heroes/FortHeroType.h"
#include "Customization/CustomCharacterPart.h"
#include "Weapons\Data\FortWeaponMeleeItemDefinition.h"
#include "AthenaBackpackItemDefinition.h"
#include "AthenaCharacterItemDefinition.generated.h"

/**
 * 
 */
UFortHeroType;


USTRUCT()
struct FAthenaCharacterTaggedPartsList 
{
	GENERATED_BODY()

public:
	TArray<TSoftObjectPtr<UCustomCharacterPart>> Parts; // 0x00(0x10)
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaCharacterItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TMap<FName, UObject*> RequestedDataStores;

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EFortCustomPartType>, UMarshalledVFX_AuthoredDataConfig*> AuthoredVFXData_ByPart;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UCustomCharacterPart>>BaseCharacterParts;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		 UFortHeroType* HeroDefinition;

	UPROPERTY(EditAnywhere)
		UAthenaBackpackItemDefinition* DefaultBackpack;

	UPROPERTY(EditAnywhere)
		TArray<UAthenaCosmeticItemDefinition*> RequiredCosmeticItems;

	UPROPERTY(EditAnywhere)
	float                                              PreviewPawnScale;

	UPROPERTY(EditAnywhere)
		TEnumAsByte<EFortCustomGender> Gender;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortFeedbackBank> FeedbackBank;

	UPROPERTY(EditAnywhere)
	TMap<FGameplayTag, FAthenaCharacterTaggedPartsList> TaggedPartsOverride;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaCharacter", GetFName());
	}
};
