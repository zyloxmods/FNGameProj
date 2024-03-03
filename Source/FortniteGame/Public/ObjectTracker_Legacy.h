#pragma once
#include "CoreMinimal.h"
#include "ObjectTracker_Legacy.generated.h"

class UMetricConfiguration_Legacy;

USTRUCT(BlueprintType)
struct FObjectTracker_Legacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UMetricConfiguration_Legacy* MetricConfiguration;
    
public:
    FORTNITEGAME_API FObjectTracker_Legacy();
};

