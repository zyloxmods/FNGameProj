#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataConditionRandom.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionRandom : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float P;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionRandom();
};

