// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "Curves/CurveFloat.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaDanceItemDefinition.h"
#include "AthenaBackpackItemDefinition.h"
#include "AthenaBattleBusItemDefinition.h"
#include "AthenaPickaxeItemDefinition.h"
#include "AthenaCharacterItemDefinition.h"
#include "AthenaGliderItemDefinition.h"
#include "AthenaMusicPackItemDefinition.h"
#include "AthenaSkyDiveContrailItemDefinition.h"
#include "CustomCharacterPart.h"
#include "EmoteActivationTrigger.h"
#include "FallbackAIPawnCustomizationMapper.h"
#include "FallbackCharacterPartsMapper.h"
#include "FortCosmeticItemFilterTable.h"
#include "FortCosmeticItemMarkupTable.h"
#include "FortCharmsMappingData.h"
#include "FortItemDefinition.h"
#include "FortHarvestingToolMontageOverrides.h"
#include "GameDataCosmetics.generated.h"


UCLASS()
class FORTNITEGAME_API UGameDataCosmetics : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
    
	UPROPERTY(EditAnywhere)
	FSoftClassPath               EmoteGameplayAbility;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               SprayGameplayAbility;
	
	
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UCustomCharacterPart>    DefaultBackpackCharacterPart;
	
	UPROPERTY(EditAnywhere)
	TArray<UCustomCharacterPart*>           DefaultCharacterParts;
	
	
	
	UPROPERTY(EditAnywhere)
	TArray<FFallbackCharacterPartsMapper>         FallbackCharacterParts;
	
	UPROPERTY(EditAnywhere)
	TArray<FFallbackAIPawnCustomizationMapper>    FallbackCustomizations;
	
	
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UDataTable>   BannerIconCategoryData;
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UDataTable>   BannerColorData;
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UDataTable>   BannerColorCategoryData;
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UDataTable>   BannerColorMap;
	
	
	
	UPROPERTY(EditAnywhere)
	UAthenaPickaxeItemDefinition*       FallbackPickaxe;
	
	UPROPERTY(EditAnywhere)
	UAthenaDanceItemDefinition*         FallbackDance;
	
	
	
	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UAthenaCosmeticItemDefinition>>     ShuffleTileItemDefinitions;
	
	
	
	UPROPERTY(EditAnywhere)
	UAthenaBackpackItemDefinition*     STWHeroBackpackItemDefinition;
	
	UPROPERTY(EditAnywhere)
	UAthenaBackpackItemDefinition*     STWHeroNoDefaultBackpackItemDefinition;
	
	
	
	UPROPERTY(EditAnywhere)
	UAthenaBattleBusItemDefinition*           DefaultBattleBusSkin;
	
	UPROPERTY(EditAnywhere)
	UAthenaGliderItemDefinition*              DefaultGliderSkin;
	
	UPROPERTY(EditAnywhere)
	UAthenaSkyDiveContrailItemDefinition*     DefaultContrailEffect;

	UPROPERTY(EditAnywhere)
	UAthenaMusicPackItemDefinition*           DefaultMusicPack;
	
	

	UPROPERTY(EditAnywhere)
	TArray<FPrimaryAssetId>          ValidMaleSkinsForAnonymousMode;
	
	UPROPERTY(EditAnywhere)
	TArray<FPrimaryAssetId>          ValidFemaleSkinsForAnonymousMode;
	
	UPROPERTY(EditAnywhere)
	TArray<FPrimaryAssetId>          ValidBackPacksForAnonymousMode;
	
	
	
	UPROPERTY(EditAnywhere)
	UFortCosmeticItemFilterTable*      FilterTagTable;
	
	UPROPERTY(EditAnywhere)
	UFortCosmeticItemMarkupTable*      CosmeticMarkupTable;
	
	
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UDataTable>   CosmeticPreviewActionList;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               CharacterPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               EmotePreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               EmotePreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               ItemWrapPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               ItemWrapPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               LoadingScreenPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               LoadingScreenPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               SprayPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               SprayPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               MusicPackPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               MusicPackPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               SkyDiveContrailPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               SkyDiveContrailPreviewCameraActorClass;
	
	
	
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
	FSoftClassPath               GliderPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               BodyPartOverridePreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               BodyPartPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               CharmPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               CharmPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               WeaponCharmPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               WeaponCharmPreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               PickaxeCosmeticPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               PickaxePreviewCameraActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               BannerItemPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               CurrencyItemPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               BattlePassItemPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               ToyItemPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               DefaultPreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath               DefaultPreviewPawnAnimInstanceClass;
	
	
	
	UPROPERTY(EditAnywhere)
	float                        ItemPreviewLODStreamingTimeout;
	
	
	//Missed Offset
	
	
	//UPROPERTY(EditAnywhere)
	//TMap<>                        CosmeticPreviewActionMap;
	
	
	UPROPERTY(EditAnywhere)
	UFortCharmsMappingData*         CharmConfigAsset;
	
	
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D>                  NoneTexture;
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D>                  DeniedCosmeticThumbnail;
	
	UPROPERTY(EditAnywhere)
	UFortItemDefinition*                        PlaceholderItemToShowForDeniedCosmetics;
	
	UPROPERTY(EditAnywhere)
	TArray<UAthenaCharacterItemDefinition*>     RandomCharacters;
	
	
	
	UPROPERTY(EditAnywhere)
	UCurveFloat*                  CameraPositionTransitionCurve;
	
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
	FName                                    Credits;

};
