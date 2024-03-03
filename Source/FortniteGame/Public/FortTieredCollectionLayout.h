#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CurveTable.h"
#include "Engine/DataAsset.h"
#include "CollectionLootSetData.h"
#include "DifficultyCollectionProgressionData.h"
#include "RewardBadgesCollectionProgressionData.h"
#include "TieredNamedCollectionProgressionData.h"
#include "FortTieredCollectionLayout.generated.h"

class UFortTieredCollectionLayout;

UCLASS(Blueprintable)
class UFortTieredCollectionLayout : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTierAsRandomSeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFiniteTiers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfTiersAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialTierUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTieredNamedCollectionProgressionData SpawnWaveProgressions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyCollectionProgressionData DifficultyProgressions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTieredNamedCollectionProgressionData ModifierProgressions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRewardBadgesCollectionProgressionData RewardBadgesProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectionLootSetData LootSetProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CollectionLayoutDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortTieredCollectionLayout> PrerequisiteLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle TierToMissionPointLookupTable;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LayoutGUID;
    
public:
    UFortTieredCollectionLayout();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseTierAsRandomSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionPointsForTier(int32 Tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCollectionLayoutDisplayName() const;
    
};

