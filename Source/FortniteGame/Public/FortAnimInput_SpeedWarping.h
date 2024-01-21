#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAnimInput_SpeedWarping.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFortAnimInput_SpeedWarping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PlayRateAdjustmentCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpeedWarpingLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpeedWarpingLimitsAddlRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpeedWarpingAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    FORTNITEGAME_API FFortAnimInput_SpeedWarping();
};

