#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "WaterJumpParams.generated.h"

USTRUCT(BlueprintType)
struct FWaterJumpParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterJumpMinVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterJumpMaxVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterJumpForceZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat JumpForceDuration;
    
    FORTNITEGAME_API FWaterJumpParams();
};

