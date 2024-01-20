#pragma once
#include "CoreMinimal.h"
#include "StrategicBuildingLevelActiveCriteriaProgress.generated.h"

USTRUCT(BlueprintType)
struct FStrategicBuildingLevelActiveCriteriaProgress {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bProgressAllowed: 1;
    
public:
    FORTNITEGAME_API FStrategicBuildingLevelActiveCriteriaProgress();
};

