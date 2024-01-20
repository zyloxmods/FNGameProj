#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionGroupBase.h"
#include "FortPlayerSurveyCMSDataConditionAnd.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionAnd : public FFortPlayerSurveyCMSDataConditionGroupBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionAnd();
};

