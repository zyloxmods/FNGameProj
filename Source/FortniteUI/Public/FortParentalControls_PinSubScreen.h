#pragma once
#include "CoreMinimal.h"
#include "FortParentalControlsSubScreen.h"
#include "FortParentalControls_PinSubScreen.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls_PinSubScreen : public UFortParentalControlsSubScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SubmitPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Pin_FailReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_Pin_Entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_Pin_SecondEntry;
    
public:
    UFortParentalControls_PinSubScreen();
private:
    UFUNCTION(BlueprintCallable)
    void HandleEnterPinTextChanged(const FText& InText);
    
};

