#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "EFortPickerMode.h"
#include "FortRadialPicker.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRadialPicker : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UFortRadialPicker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestInitializePicker(EFortPickerMode PickerMode, int32 InitalOption);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyInitializePicker();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastPanelClosed();
    
};

