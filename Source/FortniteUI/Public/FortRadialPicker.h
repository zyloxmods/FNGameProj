#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortRadialPicker.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRadialPicker : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortRadialPicker();
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastPanelClosed();
    
};

