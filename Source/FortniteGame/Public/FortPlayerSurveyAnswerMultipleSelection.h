#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerBase.h"
#include "FortPlayerSurveyAnswerMultipleSelectionSingleAnswer.h"
#include "FortPlayerSurveyAnswerMultipleSelection.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPlayerSurveyAnswerMultipleSelection : public FFortPlayerSurveyAnswerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer> AnswerList;
    
    FFortPlayerSurveyAnswerMultipleSelection();
};

