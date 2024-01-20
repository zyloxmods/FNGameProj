#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortPlayerSurveyQuestionDisplayWidgetBase.generated.h"

class IFortPlayerSurveyAnswerableQuestion;
class UFortPlayerSurveyAnswerableQuestion;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UFortPlayerSurveyQuestionDisplayWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortPlayerSurveyAnswerableQuestion> CurrentQA;
    
public:
    UFortPlayerSurveyQuestionDisplayWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetQA(TScriptInterface<IFortPlayerSurveyAnswerableQuestion> Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeHandleQuestionChanged(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleQAChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuestionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQAChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IFortPlayerSurveyAnswerableQuestion> GetQA() const;
    
};

