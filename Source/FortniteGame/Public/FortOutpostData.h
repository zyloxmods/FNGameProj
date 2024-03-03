#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HarvestingOptimizerBuildingData.h"
#include "OutpostBuildingData.h"
#include "OutpostUpgradeAndPrestigeBuildingData.h"
#include "StorageVaultBuildingData.h"
#include "FortOutpostData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortOutpostData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StructureLimitNotificationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostBuildingData StormShieldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHarvestingOptimizerBuildingData HarvestingOptimizerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStorageVaultBuildingData StorageVaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostUpgradeAndPrestigeBuildingData OutpostUpgradeAndPrestigeData;
    
    UFortOutpostData();
};

