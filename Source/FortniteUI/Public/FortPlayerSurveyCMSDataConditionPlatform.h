#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataConditionPlatform.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionPlatform : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> P;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionPlatform();
};

