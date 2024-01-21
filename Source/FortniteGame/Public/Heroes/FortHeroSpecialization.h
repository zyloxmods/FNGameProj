

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "Styling/SlateBrush.h"
#include "FortniteGame/FortniteGame.h"
#include "Styling/SlateBrush.h"
#include "Customization/CustomCharacterPart.h"
#include "FortHeroSpecialization.generated.h"

USTRUCT(BlueprintType)
struct FHeroSpecializationAttributeRequirement
{
	GENERATED_BODY()

public:

	//UPROPERTY(EditAnywhere)
	//GameplayAttribute Attribute;    

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float MinimumValue;


};

USTRUCT(BlueprintType)
struct FFortSpecializationSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FHeroSpecializationAttributeRequirement> AttributeRequirements;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer RequiredTags;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int MinimumHeroLevel;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortHeroSpecialization : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		TArray<FFortSpecializationSlot> SpecializationSlots;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TSoftObjectPtr<UCustomCharacterPart>> CharacterParts;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
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

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("FortHeroSpecialization", GetFName());
	}
};
