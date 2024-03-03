#pragma once
#include "CoreMinimal.h"
#include "DigestedTrackingOffsetModifierCurves.h"
#include "DigestedTrackingOffsetModifiers.generated.h"

USTRUCT(BlueprintType)
struct FDigestedTrackingOffsetModifiers {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CombatStartDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetLowHealthThreshold;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDigestedTrackingOffsetModifierCurves Curves[3];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDigestedTrackingOffsetModifierCurves DistanceCurves[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDigestedTrackingOffsetModifierCurves InAirHeightCurve;
    
public:
    FORTNITEGAME_API FDigestedTrackingOffsetModifiers();
};

