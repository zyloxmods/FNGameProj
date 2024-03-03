#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "LookAtSetting.generated.h"

USTRUCT(BlueprintType)
struct FLookAtSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LookAtDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LookAtDurationDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LookAtDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LookAtDelayDeviation;
    
public:
    FORTNITEGAME_API FLookAtSetting();
};

