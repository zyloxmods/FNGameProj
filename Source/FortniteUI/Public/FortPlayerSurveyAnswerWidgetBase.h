#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortPlayerSurveyAnswerContainerChangeEventInfo.h"
#include "FortPlayerSurveyAnswerWidgetBase.generated.h"

class UFortPlayerSurveyQuestionLegacy;
class UFortPlayerSurveyQuestionSelector;
class UObject;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyAnswerWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyQuestionSelector* CurrentAnswerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyQuestionLegacy* Question;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StopwatchStartTime;
    
public:
    UFortPlayerSurveyAnswerWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetQuestion(UFortPlayerSurveyQuestionLegacy* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnswerContainer(UFortPlayerSurveyQuestionSelector* Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RestartStopwatch(FTimespan StartTime);
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleAnswerContainerChanged();
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleAnswerChanged(UObject* Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentAnswerValid() const;
    
protected:
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
    UFortPlayerSurveyQuestionLegacy* GetQuestion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UWidget* GetDefaultFocusedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyQuestionSelector* GetAnswerContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void CommitCurrentAnswer();
    
};

