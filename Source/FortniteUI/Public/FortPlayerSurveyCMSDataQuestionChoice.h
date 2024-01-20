#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataQuestionChoice.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataQuestionChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText T;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataQuestionChoice();
};

