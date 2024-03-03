#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataConditionGroupBase.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionGroupBase : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJsonObjectWrapper> C;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionGroupBase();
};

