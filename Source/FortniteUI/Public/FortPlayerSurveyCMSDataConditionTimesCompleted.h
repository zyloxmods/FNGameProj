#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataBinaryComparisonOp.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataRelativeSurveyKey.h"
#include "FortPlayerSurveyCMSDataConditionTimesCompleted.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionTimesCompleted : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyCMSDataRelativeSurveyKey S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataBinaryComparisonOp O;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 T;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionTimesCompleted();
};

