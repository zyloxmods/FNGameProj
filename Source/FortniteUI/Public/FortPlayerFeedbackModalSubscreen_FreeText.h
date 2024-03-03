#pragma once
#include "CoreMinimal.h"
#include "FortPlayerFeedbackModalSubscreenBase.h"
#include "FortPlayerFeedbackModalSubscreen_FreeText.generated.h"

class UCommonButton;
class UMultiLineEditableTextBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerFeedbackModalSubscreen_FreeText : public UFortPlayerFeedbackModalSubscreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TextContainer_CustomerSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CustomerSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMultiLineEditableTextBox* Text_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Next;
    
public:
    UFortPlayerFeedbackModalSubscreen_FreeText();
};

