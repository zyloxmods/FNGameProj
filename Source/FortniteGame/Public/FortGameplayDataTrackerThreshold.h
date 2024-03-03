#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayDataTrackerThreshold.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayDataTrackerThreshold {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EnterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExitValue;
    
public:
    FORTNITEGAME_API FFortGameplayDataTrackerThreshold();
};

