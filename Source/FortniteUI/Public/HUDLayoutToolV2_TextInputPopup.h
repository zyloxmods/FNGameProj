#pragma once
#include "CoreMinimal.h"
#include "HUDLayoutToolV2_Popup.h"
#include "HUDLayoutToolV2_TextInputPopup.generated.h"

class UFortEditableFilteredCountedTextBox;
class UHUDLayoutToolV2_Button;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_TextInputPopup : public UHUDLayoutToolV2_Popup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* EditableFilteredTextBox_UserInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_Paste;
    
public:
    UHUDLayoutToolV2_TextInputPopup();
};

