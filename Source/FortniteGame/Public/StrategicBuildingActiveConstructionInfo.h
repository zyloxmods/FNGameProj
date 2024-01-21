#pragma once
#include "CoreMinimal.h"
#include "StrategicBuildingActiveConstructionInfo.generated.h"

USTRUCT(BlueprintType)
struct FStrategicBuildingActiveConstructionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ConstructionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ConstructionEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ConstructionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUnderConstruction: 1;
    
    FORTNITEGAME_API FStrategicBuildingActiveConstructionInfo();
};

