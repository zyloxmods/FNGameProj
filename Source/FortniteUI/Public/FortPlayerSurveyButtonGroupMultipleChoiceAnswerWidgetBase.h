#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyMultipleChoiceAnswerWidgetBase.h"
#include "FortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase : public UFortPlayerSurveyMultipleChoiceAnswerWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> ButtonContainerWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommonButton*> ButtonWidgets;
    
public:
    UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetNumDisplayedChoiceButtons(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetChoiceButtons(TArray<UWidget*> InButtonContainerWidgets, TArray<UCommonButton*> InButtonWidgets);
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleButtonClicked(UCommonButton* AssociatedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleButtonFocused(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleButtonClicked(int32 ButtonIndex);
    
};

