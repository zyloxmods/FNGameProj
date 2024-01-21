#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "FortPlayerSurveyCMSDataConditionGroup.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJsonObjectWrapper> C;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionGroup();
};

