#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerMultipleChoice.h"
#include "FortPlayerSurveyAnswerWidgetBase.h"
#include "FortPlayerSurveyMultipleChoiceAnswerWidgetBase.generated.h"

class UFortPlayerSurveyQuestionMultipleChoice;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyMultipleChoiceAnswerWidgetBase : public UFortPlayerSurveyAnswerWidgetBase {
    GENERATED_BODY()
public:
    UFortPlayerSurveyMultipleChoiceAnswerWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentAnswer(const FFortPlayerSurveyAnswerMultipleChoice& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyQuestionMultipleChoice* GetCurrentQuestion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAnswer(bool& bOutIsSet, FFortPlayerSurveyAnswerMultipleChoice& OutAnswer) const;
    
};

