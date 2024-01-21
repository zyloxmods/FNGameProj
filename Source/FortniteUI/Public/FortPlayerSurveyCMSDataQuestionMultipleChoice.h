#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataQuestionChoice.h"
#include "FortPlayerSurveyCMSDataQuestionStandardBase.h"
#include "FortPlayerSurveyCMSDataQuestionMultipleChoice.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataQuestionMultipleChoice : public FFortPlayerSurveyCMSDataQuestionStandardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSDataQuestionChoice> C;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataQuestionMultipleChoice();
};

