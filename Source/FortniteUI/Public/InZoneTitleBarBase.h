#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InZoneTitleBarBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInZoneTitleBarBase : public UUserWidget {
    GENERATED_BODY()
public:
    UInZoneTitleBarBase();
    UFUNCTION(BlueprintCallable)
    void HandleMouseClickOnScreen();
    
};

