#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerMultipleSelection.h"
#include "FortPlayerSurveyAnswerWidgetBase.h"
#include "FortPlayerSurveyMultipleSelectionAnswerWidgetBase.generated.h"

class UFortPlayerSurveyQuestionMultipleSelection;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyMultipleSelectionAnswerWidgetBase : public UFortPlayerSurveyAnswerWidgetBase {
    GENERATED_BODY()
public:
    UFortPlayerSurveyMultipleSelectionAnswerWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentAnswer(const FFortPlayerSurveyAnswerMultipleSelection& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetChoiceSelected(int32 Index, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChoiceSelected(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumChoicesSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyQuestionMultipleSelection* GetCurrentQuestion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAnswer(bool& bOutIsSet, FFortPlayerSurveyAnswerMultipleSelection& OutAnswer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanToggleChoice(int32 Index) const;
    
};

