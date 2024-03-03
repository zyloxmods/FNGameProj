#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortItemEntry.h"
#include "FortOutpostCoreInfo.h"
#include "FortGameModeOutpost.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortGameModeOutpost : public AFortGameModePvE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> OwnerItemRefundCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOutpostCoreInfo CurrentCoreInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSavePlayerBuiltStructuresAtAllTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTotalContinuousOneHitResourcesDistributedForForcedSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxContinuousOneHitResourcesDistributedBeforeForcedSave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLargeScaleDisassemblyForcedSaves;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUnsupportedStructureDisassembly;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckNavMeshAvailability;
    
public:
    AFortGameModeOutpost();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool DoesOutpostStatusAllowMissionStart() const;
    
};

