#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HardcoreModifierStatusBar.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UHardcoreModifierStatusBar : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UHardcoreModifierStatusBar();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUpdateActiveModifiers(int32 NumActiveModifiers);
    
};

