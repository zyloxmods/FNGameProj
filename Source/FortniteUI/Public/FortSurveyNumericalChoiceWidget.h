#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase.h"
#include "FortSurveyNumericalChoiceWidget.generated.h"

class UButton;
class UCommonTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSurveyNumericalChoiceWidget : public UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DummyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MinRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MaxRating;
    
public:
    UFortSurveyNumericalChoiceWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateText();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRatingButtons();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerRequestAnswer(int32 AnswerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* HandleGetDefaultFocusedWidget() const;
    
};

