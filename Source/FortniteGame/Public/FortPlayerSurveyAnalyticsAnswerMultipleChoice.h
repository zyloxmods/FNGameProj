#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsAnswerBase.h"
#include "FortPlayerSurveyAnalyticsAnswerMultipleChoice.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsAnswerMultipleChoice : public FFortPlayerSurveyAnalyticsAnswerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnswerIndex;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsAnswerMultipleChoice();
};

