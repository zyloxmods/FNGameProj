#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortPrimaryContentInterface.h"
#include "PrimaryContentSetup.h"
#include "FortSquadComsPicker.generated.h"

class UAthenaQuickChatBank;
class UCommonButton;
class UCommonTextBlock;
class UFortKeybindWidget;
class UFortPickerOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadComsPicker : public UCommonActivatableWidget, public IFortPrimaryContentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaQuickChatBank* QuickChatOptionsBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryContentSetup PrimaryContentSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_WheelLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Keybind_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPickerOverlay* PickerOverlay_SquadComs;
    
public:
    UFortSquadComsPicker();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySelectionAnimation();
    
    
    // Fix for true pure virtual functions not being implemented
};

