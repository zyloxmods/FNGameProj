#pragma once
#include "CoreMinimal.h"
#include "FortPlayerAnimInstance_OstrichOccupant.h"
#include "FortPlayerAnimInstance_OstrichDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortPlayerAnimInstance_OstrichDriver : public UFortPlayerAnimInstance_OstrichOccupant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BouncePlayRateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LegsBounceAlphaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegsBounceAlphaWhenSkytubing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegsBounceAlphaNoSkytubing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegsBounceAlphaInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSkyTubing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsMechMoving2D: 1;
    
    UFortPlayerAnimInstance_OstrichDriver();
};

