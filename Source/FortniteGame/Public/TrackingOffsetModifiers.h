#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "TrackingOffsetModifiers.generated.h"

USTRUCT(BlueprintType)
struct FTrackingOffsetModifiers {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CombatStartDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TargetLowHealthThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Curves[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DistanceCurves[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InAirHeightCurve;
    
public:
    FORTNITEGAME_API FTrackingOffsetModifiers();
};

