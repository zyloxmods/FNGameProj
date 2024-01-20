#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerContainer.h"
#include "FortPlayerSurveyAnswerableQuestionChangeDelegateDelegate.h"
#include "FortPlayerSurveyAnswerableQuestion.generated.h"

class UFortPlayerSurveyQuestion;

UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class UFortPlayerSurveyAnswerableQuestion : public UFortPlayerSurveyAnswerContainer {
    GENERATED_BODY()
};

class IFortPlayerSurveyAnswerableQuestion : public IFortPlayerSurveyAnswerContainer {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RemoveOnQuestionChangedDelegate(const FFortPlayerSurveyAnswerableQuestionChangeDelegate& InDelegate) const PURE_VIRTUAL(RemoveOnQuestionChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual UFortPlayerSurveyQuestion* GetQuestion() const PURE_VIRTUAL(GetQuestion, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddOnQuestionChangedDelegate(const FFortPlayerSurveyAnswerableQuestionChangeDelegate& InDelegate) const PURE_VIRTUAL(AddOnQuestionChangedDelegate,);
    
};

