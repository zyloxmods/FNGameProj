#pragma once
#include "CoreMinimal.h"
#include "StormCapDamageThresholdInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FStormCapDamageThresholdInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdCeiling;
    
    FStormCapDamageThresholdInfo();
};

