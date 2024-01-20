#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerFreeFormText.h"
#include "FortPlayerSurveyAnswerWidgetBase.h"
#include "FortPlayerSurveyFreeFormTextAnswerWidgetBase.generated.h"

class UFortPlayerSurveyQuestionFreeFormText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyFreeFormTextAnswerWidgetBase : public UFortPlayerSurveyAnswerWidgetBase {
    GENERATED_BODY()
public:
    UFortPlayerSurveyFreeFormTextAnswerWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentAnswer(const FFortPlayerSurveyAnswerFreeFormText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyQuestionFreeFormText* GetCurrentQuestion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAnswer(bool& bOutIsSet, FFortPlayerSurveyAnswerFreeFormText& OutAnswer) const;
    
};

