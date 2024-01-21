#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionGroupBase.h"
#include "FortPlayerSurveyCMSDataConditionOr.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionOr : public FFortPlayerSurveyCMSDataConditionGroupBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionOr();
};

