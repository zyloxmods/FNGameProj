#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortBladeMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBladeMenu : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UFortBladeMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
};

