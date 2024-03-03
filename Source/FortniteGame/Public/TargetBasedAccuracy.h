#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "TargetBasedAccuracy.generated.h"

USTRUCT(BlueprintType)
struct FTargetBasedAccuracy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimTrackingOffsetErrorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimTrackingHeightOffsetErrorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimTrackingDistanceErrorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimTrackingReactionTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimTrackingInterpTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimTrackingInAirVelocityThresholdMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimTrackinginAirHeightDataThresholdMultiplier;
    
public:
    FORTNITEGAME_API FTargetBasedAccuracy();
};

