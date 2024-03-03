#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataGameplayTagQuery.h"
#include "FortPlayerSurveyCMSDataConditionAthenaPoi.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionAthenaPoi : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyCMSDataGameplayTagQuery Q;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionAthenaPoi();
};

