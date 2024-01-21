#pragma once
#include "CoreMinimal.h"
#include "StrategicBuildingLevelCriteria.h"
#include "StrategicBuildingLevelUnlocks.h"
#include "StrategicBuildingUpgradePathInfo.h"
#include "StrategicBuildingLevelInformation.generated.h"

USTRUCT(BlueprintType)
struct FStrategicBuildingLevelInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategicBuildingLevelCriteria UpgradeCriteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategicBuildingUpgradePathInfo> UpgradePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategicBuildingLevelUnlocks LevelUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstructionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructionRecoveryTime;
    
    FORTNITEGAME_API FStrategicBuildingLevelInformation();
};

