#pragma once
#include "CoreMinimal.h"
#include "DigestedTargetBasedAccuracy.generated.h"

USTRUCT(BlueprintType)
struct FDigestedTargetBasedAccuracy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimTrackingOffsetErrorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimTrackingHeightOffsetErrorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimTrackingDistanceErrorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimTrackingReactionTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimTrackingInterpTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimTrackingInAirVelocityThresholdMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimTrackinginAirHeightDataThresholdMultiplier;
    
public:
    FORTNITEGAME_API FDigestedTargetBasedAccuracy();
};

