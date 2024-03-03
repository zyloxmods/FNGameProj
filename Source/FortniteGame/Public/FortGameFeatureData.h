#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManagerTypes.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortGameFeatureComponentEntry.h"
#include "FortGameFeatureItemsToFullyLoadData.h"
#include "FortGameFeatureLootTableData.h"
#include "PawnGoalSelectionTableEntry.h"
#include "Templates/SubclassOf.h"
#include "UIExtension.h"
#include "FortGameFeatureData.generated.h"

class UChildCheatManager;
class UCurveTable;
class UDataTable;
class UFortAbilitySet;
class UFortContextualTutorialDefinition;
class UFortDeathCauseData;
class UFortFactionMapping;
class UFortItemDefinition;
class UFortLevelOverlayConfig;
class UFortMobileHUDWidgetRegistryBase;
class UFortPlayspaceConfig;
class UWidget;
class UWorld;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameFeatureData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWidget> UIStateWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIExtension> UIExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMobileHUDWidgetRegistryBase> MobileHUDWidgetRegistry;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameplayCueNotifyPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UChildCheatManager>> CheatManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameFeatureLootTableData DefaultLootTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFortGameFeatureLootTableData> PlaylistOverrideLootTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> DefaultGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UCurveTable>> PlaylistOverrideGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DefaultRangedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UDataTable>> PlaylistOverrideRangedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameFeatureComponentEntry> ComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayspaceConfig* PlayspaceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLevelOverlayConfig* LevelOverlayConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> AdditionalLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> AdditionalLevelsServerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> PlayerAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortDeathCauseData> FortDeathCauseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortContextualTutorialDefinition*> ContextualTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFactionMapping> FactionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> WeaponUpgradesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPawnGoalSelectionTableEntry> PawnGoalSelectionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> SharedItemsToFullyLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameFeatureItemsToFullyLoadData> PlaylistItemsToFullyLoad;
    
public:
    UFortGameFeatureData();
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("FortGameFeatureData", GetFName());
    }
};

