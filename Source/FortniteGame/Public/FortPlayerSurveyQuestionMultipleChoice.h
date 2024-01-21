#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyQuestionChoice.h"
#include "FortPlayerSurveyQuestionStandardBase.h"
#include "FortPlayerSurveyQuestionMultipleChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortPlayerSurveyQuestionMultipleChoice : public UFortPlayerSurveyQuestionStandardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyQuestionChoice> Choices;
    
    UFortPlayerSurveyQuestionMultipleChoice();
};

