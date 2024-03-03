#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortNameLoadoutPopup.generated.h"

class UCommonButton;
class UFortCosmeticLockerItem;
class UFortEditableFilteredCountedTextBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNameLoadoutPopup : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCosmeticLockerItem* TargetLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* Text_EditableLoadoutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Accept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseMobile;
    
public:
    UFortNameLoadoutPopup();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAcceptFailed();
    
};

