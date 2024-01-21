#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionGroup.h"
#include "FortPlayerSurveyCMSDataSurvey.h"
#include "FortPlayerSurveyCMSDataRoot.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataRoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool E;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSDataConditionGroup> cg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSDataSurvey> S;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataRoot();
};

