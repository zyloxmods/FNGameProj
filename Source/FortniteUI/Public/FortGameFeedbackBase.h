#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EFortUIGameFeedbackType.h"
#include "FortActivatablePanel.h"
#include "FortGameFeedbackBase.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UEditableText;
class UMultiLineEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortGameFeedbackBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* SubjectEditable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMultiLineEditableText* BodyEditable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* BodyEditable_SingleLine;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGameFeedbackAttachments;
    
public:
    UFortGameFeedbackBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SubmitFeedback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitiateDebugInfoForFeedbackComplete();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFeedbackTypeSelected(UCommonButton* SelectedButton, int32 ButtonIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFeedbackTypeChanged(EFortUIGameFeedbackType FeedBackType);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitiateDebugInfoForFeedback();
    
protected:
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetButtonVisibilityByUIFeedbackType(EFortUIGameFeedbackType UIFeedbackType);
    
    UFUNCTION(BlueprintCallable)
    void CancelFeedback();
    
    UFUNCTION(BlueprintCallable)
    void AddButtonWithFeedbackType(UCommonButton* Button, EFortUIGameFeedbackType UIFeedbackType);
    
};

