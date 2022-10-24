// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Customization/CustomCharacterPart.h"
#include "Athena/Items/AthenaPickaxeItemDefinition.h"
#include "Athena/Items/AthenaDanceItemDefinition.h"
#include "Athena/Items/AthenaBackpackItemDefinition.h"
#include "Athena/Items/AthenaGliderItemDefinition.h"
#include "Athena/Items/AthenaBattleBusItemDefinition.h"
#include "Athena/Items/AthenaSkyDiveContrailItemDefinition.h"
#include "Athena/Items/AthenaMusicPackItemDefinition.h"
#include "Engine/DataTable.h"
#include "FortDataTables.h"
#include "GameDataCosmetics.generated.h"


UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticItemFilterTable : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<UDataTable*>  FilterTagTables;

};
USTRUCT(BlueprintType)
struct FORTNITEGAME_API FEmoteActivationTrigger
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	 FGameplayTagQuery EmoteTagQuery;

	UPROPERTY(EditAnywhere)
	 FGameplayTagQuery PlayerTagQuery;

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer TagsToApply; 

	UPROPERTY(EditAnywhere)
	float Duration;

};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCharmsMappingData : public UDataAsset
{
	GENERATED_BODY()

public:

	//UPROPERTY(EditAnywhere)
		//TArray<FCharmSlotMetadata>       SlotMetadata;

	//UPROPERTY(EditAnywhere)
		//TArray<FCharmPreviewEntry>       NonSlotPreviewList;

	UPROPERTY(EditAnywhere)
		FGameplayTag                     DoNotApplyCharmsTag;

};

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFallbackAIPawnCustomizationMapper
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FGameplayTag RequiredTag;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath CustomizationFallback;
};

USTRUCT(BlueprintType)
struct FFortHarvestingToolMontageOverrideData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTag                                CosmeticTag;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage>                MontageToPlay;
};


USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFallbackCharacterPartsMapper
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FGameplayTag                                         RequiredTag;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UCustomCharacterPart>>         CharacterParts;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticItemMarkupTable : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<UDataTable*>  SetDescriptions;

	UPROPERTY(EditAnywhere)
		TArray<UDataTable*>  MarkupTagDescriptions;

};
USTRUCT(BlueprintType)
struct FFortHarvestingToolMontageOverrides 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<FFortHarvestingToolMontageOverrideData> MontageOverrideData;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UGameDataCosmetics : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		class UClass* EmoteGameplayAbility;

	UPROPERTY(EditAnywhere)
		class UClass* SprayGameplayAbility;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UCustomCharacterPart> DefaultBackpackCharacterPart;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UCustomCharacterPart>> DefaultCharacterParts;

	UPROPERTY(EditAnywhere)
		TArray<FFallbackCharacterPartsMapper> FallbackCharacterParts;

	UPROPERTY(EditAnywhere)
		TArray<FFallbackAIPawnCustomizationMapper> FallbackCustomizations;



	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UDataTable>   BannerIconCategoryData;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UDataTable>   BannerColorData;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UDataTable>   BannerColorCategoryData;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortHomebaseBannerColorMap>   BannerColorMap;



	UPROPERTY(EditAnywhere)
		UAthenaPickaxeItemDefinition* FallbackPickaxe;

	UPROPERTY(EditAnywhere)
		UAthenaDanceItemDefinition* FallbackDance;



	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UAthenaCosmeticItemDefinition>>     ShuffleTileItemDefinitions;



	UPROPERTY(EditAnywhere)
		UAthenaBackpackItemDefinition* STWHeroBackpackItemDefinition;

	UPROPERTY(EditAnywhere)
		UAthenaBackpackItemDefinition* STWHeroNoDefaultBackpackItemDefinition;



	UPROPERTY(EditAnywhere)
		UAthenaBattleBusItemDefinition* DefaultBattleBusSkin;

	UPROPERTY(EditAnywhere)
		UAthenaGliderItemDefinition* DefaultGliderSkin;

	UPROPERTY(EditAnywhere)
		UAthenaSkyDiveContrailItemDefinition* DefaultContrailEffect;

	UPROPERTY(EditAnywhere)
		UAthenaMusicPackItemDefinition* DefaultMusicPack;



	UPROPERTY(EditAnywhere)
		TArray<FPrimaryAssetId>          ValidMaleSkinsForAnonymousMode;

	UPROPERTY(EditAnywhere)
		TArray<FPrimaryAssetId>          ValidFemaleSkinsForAnonymousMode;

	UPROPERTY(EditAnywhere)
		TArray<FPrimaryAssetId>          ValidBackPacksForAnonymousMode;



	UPROPERTY(EditAnywhere)
		UFortCosmeticItemFilterTable* FilterTagTable;

	UPROPERTY(EditAnywhere)
		UFortCosmeticItemMarkupTable* CosmeticMarkupTable;



	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UDataTable>   CosmeticPreviewActionList;

	UPROPERTY(EditAnywhere)
		class UClass* CharacterPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* EmotePreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* EmotePreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* ItemWrapPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* ItemWrapPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* LoadingScreenPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* LoadingScreenPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* SprayPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* SprayPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* MusicPackPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* MusicPackPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* SkyDiveContrailPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* SkyDiveContrailPreviewCameraActorClass;



	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage>   SkyDiveContrailAnimation_Male;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage>   SkyDiveContrailAnimation_Female;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage>   PickaxePreviewMontage_Idle2H;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage>   PickaxePreviewMontage_Swing2H;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage>   PickaxePreviewMontage_IdleDualWield;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage>   PickaxePreviewMontage_SwingDualWield;



	UPROPERTY(EditAnywhere)
		class UClass* GliderPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* BodyPartOverridePreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* BodyPartPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* CharmPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* CharmPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* WeaponCharmPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* WeaponCharmPreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* PickaxeCosmeticPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* PickaxePreviewCameraActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* BannerItemPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* CurrencyItemPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* BattlePassItemPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* ToyItemPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* DefaultPreviewActorClass;

	UPROPERTY(EditAnywhere)
		class UClass* DefaultPreviewPawnAnimInstanceClass;



	UPROPERTY(EditAnywhere)
		float                        ItemPreviewLODStreamingTimeout;


	//Missed Offset


	//UPROPERTY(EditAnywhere)
	//TMap<>                        CosmeticPreviewActionMap;


	UPROPERTY(EditAnywhere)
		UFortCharmsMappingData* CharmConfigAsset;



	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D>                  NoneTexture;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D>                  DeniedCosmeticThumbnail;

	UPROPERTY(EditAnywhere)
		UFortItemDefinition* PlaceholderItemToShowForDeniedCosmetics;

	UPROPERTY(EditAnywhere)
		TArray<UAthenaCharacterItemDefinition*>     RandomCharacters;



	UPROPERTY(EditAnywhere)
		UCurveFloat* CameraPositionTransitionCurve;

	UPROPERTY(EditAnywhere)
		float                         CameraPositionTransitionDuration;

	UPROPERTY(EditAnywhere)
		float                         CameraPositionTargetMaxLerpDistance;

	//Missed Offset

	UPROPERTY(EditAnywhere)
		FFortHarvestingToolMontageOverrides      HarvestingToolMontageOverrides;

	UPROPERTY(EditAnywhere)
		TArray<int>                              BakedThumbnailData;

	UPROPERTY(EditAnywhere)
	TArray<FEmoteActivationTrigger>          EmoteActivationTriggers;



	//Credits
	UPROPERTY(EditAnywhere)
		FName Credits;
	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("GameDataCosmetics", GetFName());
	}
};
