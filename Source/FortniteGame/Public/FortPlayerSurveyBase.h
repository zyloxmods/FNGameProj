#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortPlayerSurveyFinishReason.h"
#include "FortPlayerSurvey.h"
#include "FortPlayerSurveyAnswer.h"
#include "FortPlayerSurveyDescription.h"
#include "FortPlayerSurveyItemChangedDelegateDelegate.h"
#include "FortPlayerSurveyNotificationDelegateDelegate.h"
#include "FortPlayerSurveyBase.generated.h"

class UFortPlayerSurveyQuestion;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyBase : public UObject, public IFortPlayerSurvey {
    GENERATED_BODY()
public:
   // UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FFortPlayerSurveyFinished OnSurveyFinished;
    
protected:
   //// UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FFortPlayerSurveyItemChangedInternalDelegate OnAnswerChangedDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnswer> Answers;
    
    UFortPlayerSurveyBase();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetAnswer(int32 Index, FFortPlayerSurveyAnswer Value) override PURE_VIRTUAL(SetAnswer,);
    
    //UFUNCTION(BlueprintCallable)
    //void RemoveOnQuestionChangedDelegate(const FFortPlayerSurveyItemChangedDelegate& InDelegate) override PURE_VIRTUAL(RemoveOnQuestionChangedDelegate,);
    
    //UFUNCTION(BlueprintCallable)
    //void RemoveOnDescriptionChangedDelegate(const FFortPlayerSurveyNotificationDelegate& InDelegate) override PURE_VIRTUAL(RemoveOnDescriptionChangedDelegate,);
    
    //UFUNCTION(BlueprintCallable)
    //void RemoveOnAnswerChangedDelegate(const FFortPlayerSurveyItemChangedDelegate& InDelegate) override PURE_VIRTUAL(RemoveOnAnswerChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    bool IsSurveyAllowed() const override PURE_VIRTUAL(IsSurveyAllowed, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnswerValid(int32 Index) const override PURE_VIRTUAL(IsAnswerValid, return false;);
    
    UFUNCTION(BlueprintCallable)
    UFortPlayerSurveyQuestion* GetQuestion(int32 Index) const override PURE_VIRTUAL(GetQuestion, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumQuestions() const override PURE_VIRTUAL(GetNumQuestions, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FFortPlayerSurveyDescription GetDescription() const override PURE_VIRTUAL(GetDescription, return FFortPlayerSurveyDescription{};);
    
    UFUNCTION(BlueprintCallable)
    FFortPlayerSurveyAnswer GetAnswer(int32 Index) const override PURE_VIRTUAL(GetAnswer, return FFortPlayerSurveyAnswer{};);
    
    UFUNCTION(BlueprintCallable)
    void Finish(EFortPlayerSurveyFinishReason Reason) override PURE_VIRTUAL(Finish,);
    
    //UFUNCTION(BlueprintCallable)
    //void AddOnQuestionChangedDelegate(const FFortPlayerSurveyItemChangedDelegate& InDelegate) override PURE_VIRTUAL(AddOnQuestionChangedDelegate,);
    
    //UFUNCTION(BlueprintCallable)
    //void AddOnDescriptionChangedDelegate(const FFortPlayerSurveyNotificationDelegate& InDelegate) override PURE_VIRTUAL(AddOnDescriptionChangedDelegate,);
    
    //UFUNCTION(BlueprintCallable)
    //void AddOnAnswerChangedDelegate(const FFortPlayerSurveyItemChangedDelegate& InDelegate) override PURE_VIRTUAL(AddOnAnswerChangedDelegate,);
    
};

