#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFortPlayerSurveyFinishReason.h"
#include "FortPlayerSurveyAnswer.h"
#include "FortPlayerSurveyDescription.h"
#include "FortPlayerSurveyItemChangedDelegateDelegate.h"
#include "FortPlayerSurveyNotificationDelegateDelegate.h"
#include "FortPlayerSurvey.generated.h"

class UFortPlayerSurveyQuestion;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FORTNITEGAME_API UFortPlayerSurvey : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortPlayerSurvey : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetAnswer(int32 Index, FFortPlayerSurveyAnswer Value) PURE_VIRTUAL(SetAnswer,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveOnQuestionChangedDelegate(const FFortPlayerSurveyItemChangedDelegate& InDelegate) PURE_VIRTUAL(RemoveOnQuestionChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveOnDescriptionChangedDelegate(const FFortPlayerSurveyNotificationDelegate& InDelegate) PURE_VIRTUAL(RemoveOnDescriptionChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveOnAnswerChangedDelegate(const FFortPlayerSurveyItemChangedDelegate& InDelegate) PURE_VIRTUAL(RemoveOnAnswerChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsSurveyAllowed() const PURE_VIRTUAL(IsSurveyAllowed, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsAnswerValid(int32 Index) const PURE_VIRTUAL(IsAnswerValid, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual UFortPlayerSurveyQuestion* GetQuestion(int32 Index) const PURE_VIRTUAL(GetQuestion, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumQuestions() const PURE_VIRTUAL(GetNumQuestions, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FFortPlayerSurveyDescription GetDescription() const PURE_VIRTUAL(GetDescription, return FFortPlayerSurveyDescription{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FFortPlayerSurveyAnswer GetAnswer(int32 Index) const PURE_VIRTUAL(GetAnswer, return FFortPlayerSurveyAnswer{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void Finish(EFortPlayerSurveyFinishReason Reason) PURE_VIRTUAL(Finish,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddOnQuestionChangedDelegate(const FFortPlayerSurveyItemChangedDelegate& InDelegate) PURE_VIRTUAL(AddOnQuestionChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddOnDescriptionChangedDelegate(const FFortPlayerSurveyNotificationDelegate& InDelegate) PURE_VIRTUAL(AddOnDescriptionChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddOnAnswerChangedDelegate(const FFortPlayerSurveyItemChangedDelegate& InDelegate) PURE_VIRTUAL(AddOnAnswerChangedDelegate,);
    
};

