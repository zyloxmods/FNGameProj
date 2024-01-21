#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "IconTextButtonSpectatorBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UIconTextButtonSpectatorBase : public UCommonButton {
    GENERATED_BODY()
public:
    UIconTextButtonSpectatorBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
};

