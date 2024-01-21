#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortPlayerSurveyAnswerContainerChangeEventInfo.h"
#include "Blueprint/UserWidget.h"
#include "FortPlayerSurveyAnswerWidgetBase.generated.h"

class IFortPlayerSurveyAnswerContainer;
class UFortPlayerSurveyAnswerContainer;
class UFortPlayerSurveyQuestion;
class UObject;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyAnswerWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortPlayerSurveyAnswerContainer> CurrentAnswerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyQuestion* Question;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StopwatchStartTime;
    
public:
    UFortPlayerSurveyAnswerWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetQuestion(UFortPlayerSurveyQuestion* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnswerContainer(TScriptInterface<IFortPlayerSurveyAnswerContainer> Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RestartStopwatch(FTimespan StartTime);
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleAnswerContainerChanged();
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleAnswerChanged(UObject* Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleQuestionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCommitCurrentAnswer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAnswerContainerChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAnswerChanged(const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FText GetSubtitleText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetStopwatchTime() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyQuestion* GetQuestion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UWidget* GetDefaultFocusedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IFortPlayerSurveyAnswerContainer> GetAnswerContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void CommitCurrentAnswer();
    
};

