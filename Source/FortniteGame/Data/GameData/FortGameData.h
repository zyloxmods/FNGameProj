// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortGameData.generated.h"


UCLASS()
class FORTNITEGAME_API UFortGameData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/*
	UPROPERTY(EditAnywhere)
	UClass* TestEncounter;      

	UPROPERTY(EditAnywhere)
	UClass* CombatManager;       

	UPROPERTY(EditAnywhere)
	 UClass* DefaultCameraManager;           

	UPROPERTY(EditAnywhere)
	class UClass* UIMapManager;    

	UPROPERTY(EditAnywhere)
	class UClass* MusicManager;    

	UPROPERTY(EditAnywhere)
	FText  DefaultHeroName;                                         
	class UFortTips* LoadingScreenTips;    

	UPROPERTY(EditAnywhere)
	class UFortTooltipMap* ObjClassToTooltipClassMap;        

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            DefaultDamageReceiverClass;     

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            DefaultDamageReceiverClassAthena;     

	UPROPERTY(EditAnywhere)
	class UFortTooltipDisplayStatsLookupTable* ObjClassToTooltipStatsMap;          

	UPROPERTY(EditAnywhere)
	class UFortTokenToTextTable* TooltipTokenToTextTable;                       

	UPROPERTY(EditAnywhere)
	class UFortTokenToAttributeTable* TooltipTokenToAttributeTable;    

	UPROPERTY(EditAnywhere)
	float                                              PickupSplineOffsetRange[0x2];       

	UPROPERTY(EditAnywhere)
	float                                              PickupSplineRandomMax;      

	UPROPERTY(EditAnywhere)
	float                                              PickupSplineDropToGroundLength;     

	UPROPERTY(EditAnywhere)
	class UCurveVector* PickupSplineCurve;                                    

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortTokenType>                    AccountInventoryBonusToken;    

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortTokenType>                    WorldInventoryBonusToken; 

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortTokenType>                    FounderChatUnlockToken;                                  
	class UFortRarityData* RarityData;                                          

	UPROPERTY(EditAnywhere)
	class UFortScoreStylingData* ScoreStylingData;                     

	UPROPERTY(EditAnywhere)
	class UFortItemCategory* ItemCategories;                                         

	UPROPERTY(EditAnywhere)
	struct FQuickBarData                               QuickBarDefinitions;       

	UPROPERTY(EditAnywhere)
	TArray<struct FName>                               AutoEquipTags;              

	UPROPERTY(EditAnywhere)
	struct FGameplayTagContainer                       AutoEquipTagContainer;          

	UPROPERTY(EditAnywhere)
	struct FLinearColor                                BuildingFullHealthFlashColor;     

	UPROPERTY(EditAnywhere)
	struct FLinearColor                                InvalidEditPatternColor;          

	UPROPERTY(EditAnywhere)
	struct FFortHighlightColorsContainer               HighlightColors[0x3];    

	UPROPERTY(EditAnywhere)
	float                                              ScoreDisplayFactor;   

	//Missed Offset                                 

	UPROPERTY(EditAnywhere)
	TArray<FFortReplicatedStatMapping> StatMappings;       

	UPROPERTY(EditAnywhere)
	class UDataTable* ScoreMultiplierDataTable;                        

	UPROPERTY(EditAnywhere)
	int                                                ScoreDivisor;  

	UPROPERTY(EditAnywhere)
	int                                                XPMult;           

	UPROPERTY(EditAnywhere)
	float                                              GroupScoreRates[0x5];       

	UPROPERTY(EditAnywhere)
	float                                              ScoreToXPLinearRate; 

	UPROPERTY(EditAnywhere)
	int                                                LinearEnd;            

	UPROPERTY(EditAnywhere)
	int                                                XpPerAccountLevel;          

	UPROPERTY(EditAnywhere)
	float                                              CriticalMatch_XpBonusPercent;        

	UPROPERTY(EditAnywhere)
	float                                              PersonalBoost_XpBonusPercent;     

	UPROPERTY(EditAnywhere)
	float                                              GroupBoost_XpBonusPercent;    

	UPROPERTY(EditAnywhere)
	float                                              GroupBoost_BuffMultiplier;     

	UPROPERTY(EditAnywhere)
	float                                              Rest_XpBonusPercent;         

	//Missed Offset

	UPROPERTY(EditAnywhere)                                   
	class USoundMix* LoadingScreenSoundMix;    

	UPROPERTY(EditAnywhere)
	class USoundMix* BaseSoundMix; 

	UPROPERTY(EditAnywhere)
	class UClass* AbilityTargetingActorBlueprintClass;                   

	UPROPERTY(EditAnywhere)
	TArray<TAssetPtr<class UFortWeaponMeleeItemDefinition>> HarvestingTools;  

	UPROPERTY(EditAnywhere)
	TArray<TAssetPtr<class UFortWeaponMeleeItemDefinition>> AthenaHarvestingToolsToPreload;   

	UPROPERTY(EditAnywhere)
	TArray<FKeybindIcon> IconKeyList;              

	UPROPERTY(EditAnywhere)
	TArray<FKeybindIcon> IconKeyListPS4;        

	UPROPERTY(EditAnywhere)
	TArray<FKeybindIcon> IconKeyListXboxOne;            

	UPROPERTY(EditAnywhere)
	struct FSubGameInfo                                SubGameInfo[0x2];                   

	UPROPERTY(EditAnywhere)
	struct FGameplayTagContainer                       PlacementActorUsedTags;     

	UPROPERTY(EditAnywhere)
	struct FFortPlayerSpawnPadPlacementData            DefaultPlayerSpawnPadPlacementData;                       

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCustomCharacterPart>              DefaultBackpackCharacterPart;       

	UPROPERTY(EditAnywhere)
	TArray<TAssetPtr<class UCustomCharacterPart>>      DefaultCharacterParts;                   

	UPROPERTY(EditAnywhere)
	class UClass* AIGoalManagerClass;                                       // 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UClass* SharedMissionListsClass;                                  // 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	float                                              QueuedAnnouncementPauseTimes[0x3];                        // 0x0490(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	unsigned char                                      UnknownData02[0x4];                                       // 0x049C(0x0004) MISSED OFFSET

	UPROPERTY(EditAnywhere)
	struct FCurveTableRowHandle                        WeakSpotEnabledTimeoutHandle;                             // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	float                                              BuildingStructuralCollapseDelay;                          // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	float                                              BuildingStructuralCollapseDelayVariance;                  // 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	float                                              BuildingStructuralCollapseCellDistAdditiveDelay;          // 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	float                                              BuildingStructuralCollapseCellDistAdditiveDelayVariance;  // 0x04BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	float                                              EditModeCancelDistance;                                   // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)

		// MISSED OFFSET
	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingExcessDamageRewardTimeoutHandle;                  // 0x04C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingCostHandles[0x4];                                 // 0x04D8(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingDeconCostMultHandles[0x4];                        // 0x0518(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        PlayerBuildingDeconCostMultHandles[0x4];                  // 0x0558(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingInitialHealthPercentHandles[0x4];                 // 0x0598(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingRepairCostMultiplierHandles[0x4];                 // 0x05D8(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	float                                              FORTAttributeToPowerMultiplier;                           // 0x0618(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	//Missed Offset

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingBreakAnimDurationHandles[0x4];                    // 0x0620(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingDestroyAnimDurationHandles[0x4];                  // 0x0660(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingPlacementAnimDurationHandles[0x4];                // 0x06A0(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FCurveTableRowHandle                        BuildingCritDamagePctHandles[0x4];                        // 0x06E0(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	 FCurveTableRowHandle                        BuildingCritDestroyAnimScaleCapHandles[0x4];              // 0x0720(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<UMaterialParameterCollection>      StencilDefinitionCollection;                              // 0x0760(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FSoundPerResourceLevel                      BuildingConstructionSounds[0x4];                          // 0x0780(0x0030) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FSoundPerResourceLevel                      GenericBuildingDeathSounds[0x4];                          // 0x0840(0x0030) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FSoundPerResourceLevel                      PlayerBuiltBuildingDeathSounds[0x4];                      // 0x0900(0x0030) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	FText                                       ResourceNames];                                       // 0x09C0(0x0018)

	UPROPERTY(EditAnywhere)
	FText                                       BuildingTypeNames[0xC];                                   // 0x0A20(0x0018)

	UPROPERTY(EditAnywhere)
	class UFortResourceItemDefinition* StoneItemDefinition;                                      // 0x0B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortResourceItemDefinition* WoodItemDefinition;                                       // 0x0B48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortResourceItemDefinition* MetalItemDefinition;                                      // 0x0B50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortAmmoItemDefinition* PistolAmmoItemDefinition;                                 // 0x0B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortResourceItemDefinition* PermaniteItemDefinition;                                  // 0x0B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortAmmoItemDefinition* ShotgunAmmoItemDefinition;                                // 0x0B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortAmmoItemDefinition* RifleAmmoItemDefinition;                                  // 0x0B70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortAmmoItemDefinition* AssaultAmmoItemDefinition;                                // 0x0B78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortAmmoItemDefinition* EnergyAmmoItemDefinition;                                 // 0x0B80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortNeverPersistItemDefinition* BluGloItemDefinition;                                     // 0x0B88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortItemDefinition* CriticalMissionRewardItemDefinition;                      // 0x0B90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortItemDefinition* ScoreBonusMultiplerItemDefinition;                        // 0x0B98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortWorldItemDefinition>          BackpackItemDefinition;                                   // 0x0BA0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortWorldItemDefinition>          MissionRewardPackItemDefinition;                          // 0x0BC0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	struct FText                                       OutpostRefundDialogTitle;                                 // 0x0BE0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	struct FText                                       OutpostRefundDialogText;                                  // 0x0BF8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	struct FText                                       OutpostRefundButtonText;                                  // 0x0C10(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortGamepadSettings>              GamepadSettingsDefault;                                   // 0x0C28(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortGamepadSettings>              GamepadSettingsPS4;                                       // 0x0C48(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortGamepadSettings>              GamepadSettingsXboxOne;                                   // 0x0C68(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TArray<TAssetPtr<class UDataTable>>                LootTierDataTables;                                       // 0x0C88(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TArray<TAssetPtr<class UDataTable>>                LootPackageDataTables;                                    // 0x0C98(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        WaveSetCollectionData;                                    // 0x0CA8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        WaveSetData;                                              // 0x0CC8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        ModifierSetData;                                          // 0x0CE8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        WaveSetCollectionLootData;                                // 0x0D08(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        PlayerStatClampingData;                                   // 0x0D28(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	struct FGameplayTagContainer                       NonGameplayRelevantTags;                                  // 0x0D48(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveTable>                       CraftingTimeTable;                                        // 0x0D68(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class USoundBase>                        DefaultCraftingSuccessSound;                              // 0x0D88(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	class UClass* TeamStatsGameplayEffect;                                  // 0x0DA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	TArray<struct FFortDailyRewardScheduleData>        DailyRewardSchedules;                                     // 0x0DB0(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        ExpeditionCriteriaRequirementsData;                       // 0x0DC0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	class UDataTable* DifficultyData;                                           // 0x0DE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	float                                              LowXpConningValue;                                        // 0x0DE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	float                                              VeryLowXpConningValue;                                    // 0x0DEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	float                                              NoXpConningValue;                                         // 0x0DF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0DF4(0x0004) MISSED OFFSET

	UPROPERTY(EditAnywhere)
	struct FText                                       FullXpConningMsg;                                         // 0x0DF8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	struct FText                                       LowXpConningMsg;                                          // 0x0E10(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	struct FText                                       VeryLowXpConningMsg;                                      // 0x0E28(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	struct FText                                       NoXpConningMsg;                                           // 0x0E40(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	class UDataTable* LootQuotaData;                                            // 0x0E58(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UDataTable* LootLevelData;                                            // 0x0E60(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UDataTable* SurfaceRatioBySurfaceCategoryData;                        // 0x0E68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UDataTable* SurfaceRatioByAffiliationData;                            // 0x0E70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UDataTable* QuestObjectiveStatData;                                   // 0x0E78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UDataTable* XPAccountLevelsTable;                                     // 0x0E80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UDataTable* XPHeroLevelsTable;                                        // 0x0E88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UCurveTable* XPAccountItemLevelsTable;                                 // 0x0E90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UCurveTable* XPAccountItemRewardsTable;                                // 0x0E98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UCurveTable* XPConningTable;                                           // 0x0EA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UClass* TeamIdentifications[0x68];                                // 0x0EA8(0x0008) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	TArray<struct FFortQuestPackInfo>                  QuestPackInfos;                                           // 0x11E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	class UFortQuestItemDefinition* OnboardingQuestItemDefinition;                            // 0x11F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	struct FDataTableRowHandle                         OnboardingCompleteZoneObjective;                          // 0x1200(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        QuestAchievementData;                                     // 0x1210(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	struct FSlateBrush                                 LoadingScreenBackground_Generic;                          // 0x1230(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	struct FSlateBrush                                 LoadingScreenEABackground;                                // 0x12C0(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	struct FConditionalFoundationQuota                 ConditionalFoundationQuota;                               // 0x1350(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	class UFortItemDefinition* SkillPointItemDef;                                        // 0x1360(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	class UFortItemDefinition* ResearchPointItemDef;                                     // 0x1368(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortMissionGenerationData>        MissionGenerationData;                                    // 0x1370(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TArray<TAssetPtr<class UFortWorldItemDefinition>>  CheatInventoryItems;                                      // 0x1390(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            TheaterMapViewerClass;                                    // 0x13A0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        MissionAlertCategories;                                   // 0x13C0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        MissionAlertSpreadDatas;                                  // 0x13E0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UDataTable>                        MissionAlerts;                                            // 0x1400(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UMyTownData>                       MyFortData;                                               // 0x1420(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortHomebaseManager>              HomebaseManager;                                          // 0x1440(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortCollectionBookData>           CollectionBookData;                                       // 0x1460(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortSurvivorData>                 SurvivorData;                                             // 0x1480(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortOutpostData>                  OutpostData;                                              // 0x14A0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortAttributeLookupTable>         AttributeLookupTable;                                     // 0x14C0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortAttributeCategory>            AttributeCategories;                                      // 0x14E0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortTagUIDataLookupTable>         UITagDataTable;                                           // 0x1500(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	float                                              PowerPointDisplayMultiplier;                              // 0x1520(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

		//MISSED OFFSET

	UPROPERTY(EditAnywhere)
	struct FCurveTableRowHandle                        PowerPointToRatingConversion;                             // 0x1528(0x0010) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TArray<struct FSettingsHUDVisibilityAndText>       HUDVisibilityGameplayTags;                                // 0x1538(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            DamageNumbersActorClass;                                  // 0x1548(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            CrackEffectBlueprintClass;                                // 0x1568(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            PickupEffectBlueprintClass;                               // 0x1588(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	struct FDataTableRowHandle                         GameDifficultyRowPIE;                                     // 0x15A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TArray<TAssetPtr<class UClass>>                    AIDirectors;                                              // 0x15B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	int                                                AIDirectorIndex;                                          // 0x15C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	int                                                AlternateBalanceAIDirectorIndex;                          // 0x15CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            FeedbackManagerClass;                                     // 0x15D0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortUIFeedbackBank>               UIFeedbackBank;                                           // 0x15F0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            StatEventManagerClass;                                    // 0x1610(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortHeroType>                     DefaultHero;                                              // 0x1630(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TArray<TAssetPtr<class UFortHeroType>>             DefaultAthenaHeroes;                                      // 0x1650(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TArray<struct FItemDefinitionAndCount>             DefaultInventoryList;                                     // 0x1660(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TArray<struct FItemDefinitionAndCount>             FastLoadDefaultInventoryList;                             // 0x1670(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            ThreatVisualsManager;                                     // 0x1680(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            WindManager;                                              // 0x16A0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortEditToolItemDefinition>       EditToolItem;                                             // 0x16C0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortAbilitySet>                   GenericPlayerAbilitySet;                                  // 0x16E0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UFortAbilitySet>                   GenericTrapAbilitySet;                                    // 0x1700(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TArray<struct FFortAbilityTagRelationship>         AbilityTagRelationships;                                  // 0x1720(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            EnvironmentDamageTemplateGE;                              // 0x1730(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            FallingDamageTemplateGE;                                  // 0x1750(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            HealingTemplateGE;                                        // 0x1770(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            FatalDamageTemplateGE;                                    // 0x1790(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            SquadMemberStatBonusGE;                                   // 0x17B0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            TeamTrapBonusGE;                                          // 0x17D0(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	float                                              SquadMemberStatBonusMultiplier;                           // 0x17F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	  // MISSED OFFSET

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            BASEClass;                                                // 0x17F8(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            HeroManagementWidgetClass;                                // 0x1818(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            PlayerChoiceWidgetClass;                                  // 0x1838(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            RewardChoiceWidgetClass;                                  // 0x1858(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            HeroNotifcationHandlerClass;                              // 0x1878(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            QuestNotificationHandlerClass;                            // 0x1898(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            BasicNotificationClass;                                   // 0x18B8(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            FriendNotificationClass;                                  // 0x18D8(0x0020) (CPF_Edit)
	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            TwitchNotificationClass;                                  // 0x18F8(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	struct FUISoundFeedback                            FriendFeedbackSounds[0x3];                                // 0x1918(0x0008) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UMaterialInterface>                HealthScreenDamagePostProcessMat;                         // 0x1930(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            ZoneModifiersAnnouncementClass;                           // 0x1950(0x0020) (CPF_Edit)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveTable>                       SessionXPCurveTable;                                      // 0x1970(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveTable>                       TieredWavesDefenseReqTable;                               // 0x1990(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UParticleSystem>                   FallbackDeathParticles;                                   // 0x19B0(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UParticleSystem>                   WallFallbackDeathParticles;                               // 0x19D0(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UParticleSystem>                   FallbackConstructedEffect;                                // 0x19F0(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UParticleSystem>                   RepairEffect;                                             // 0x1A10(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class USoundBase>                        ConstructionCompleteSound;                                // 0x1A30(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UMaterialInterface>                DamageMaterial;                                           // 0x1A50(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       BounceCurve;                                              // 0x1A70(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UMaterialInterface>                BlueprintParentMaterial;                                  // 0x1A90(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       EditCurve;                                                // 0x1AB0(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveVector>                      BlueprintDamageCurve;                                     // 0x1AD0(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       FullHealthAnimCurve;                                      // 0x1AF0(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       RepairAnimCurve;                                          // 0x1B10(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       DynamicLODEffectCurve;                                    // 0x1B30(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       InteractFullBounceCurve;                                  // 0x1B50(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       InteractFullBounceNormalCurve;                            // 0x1B70(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       InteractEmptyBounceCurve;                                 // 0x1B90(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UCurveFloat>                       InteractEmptyBounceNormalCurve;                           // 0x1BB0(0x0020) (CPF_Transient)

	UPROPERTY(EditAnywhere)
	struct FGameplayTag                                ExpeditionUnlockedTag;                                    // 0x1BD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)

	UPROPERTY(EditAnywhere)
	struct FGameplayTagContainer                       ExpeditionVehicleTags;                                    // 0x1BD8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)

	UPROPERTY(EditAnywhere)
	TAssetPtr<class UClass>                            ExpeditionMasterWidgetClass;                              // 0x1BF8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	int                                                DailyMissionAlertQuota;                                   // 0x1C18(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	  //MISSED OFFSET

	UPROPERTY(EditAnywhere)
	struct FOnlineAccountTexts                         OnlineAccountTexts;                                       // 0x1C20(0x07B0) (CPF_Edit)
	*/
};
