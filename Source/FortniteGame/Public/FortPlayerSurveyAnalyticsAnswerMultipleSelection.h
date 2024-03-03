#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsAnswerBase.h"
#include "FortPlayerSurveyAnalyticsAnswerMultipleSelectionSingleAnswer.h"
#include "FortPlayerSurveyAnalyticsAnswerMultipleSelection.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsAnswerMultipleSelection : public FFortPlayerSurveyAnalyticsAnswerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnalyticsAnswerMultipleSelectionSingleAnswer> AnswerList;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsAnswerMultipleSelection();
};

