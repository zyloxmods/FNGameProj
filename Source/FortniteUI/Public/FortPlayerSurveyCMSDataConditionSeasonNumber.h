#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionSimpleIntComparisonBase.h"
#include "FortPlayerSurveyCMSDataConditionSeasonNumber.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionSeasonNumber : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionSeasonNumber();
};

