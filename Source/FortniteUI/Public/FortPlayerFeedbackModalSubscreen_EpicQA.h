#pragma once
#include "CoreMinimal.h"
#include "EPlayerFeedback_EpicQAState.h"
#include "FortPlayerFeedbackModalSubscreenBase.h"
#include "FortPlayerFeedbackModalSubscreen_EpicQA.generated.h"

class UComboBoxString;
class UCommonButton;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerFeedbackModalSubscreen_EpicQA : public UFortPlayerFeedbackModalSubscreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBoxString_BugComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SignIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ConfirmComponent;
    
public:
    UFortPlayerFeedbackModalSubscreen_EpicQA();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateUpdated(EPlayerFeedback_EpicQAState NewState);
    
};

