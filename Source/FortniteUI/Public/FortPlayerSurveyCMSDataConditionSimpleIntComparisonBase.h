#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataBinaryComparisonOp.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataConditionSimpleIntComparisonBase.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataBinaryComparisonOp O;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 T;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase();
};

