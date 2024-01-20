#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataConditionGroupReference.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionGroupReference : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionGroupReference();
};

