#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataBinaryComparisonOp.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataRelativeSurveyKey.h"
#include "FortPlayerSurveyCMSDataConditionMostRecentlyCompleted.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionMostRecentlyCompleted : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyCMSDataRelativeSurveyKey S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataBinaryComparisonOp O;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double T;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionMostRecentlyCompleted();
};

