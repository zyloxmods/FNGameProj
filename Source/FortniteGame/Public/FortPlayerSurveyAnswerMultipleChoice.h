#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerBase.h"
#include "FortPlayerSurveyAnswerMultipleChoice.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnswerMultipleChoice : public FFortPlayerSurveyAnswerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnswerIndex;
    
    FORTNITEGAME_API FFortPlayerSurveyAnswerMultipleChoice();
};

