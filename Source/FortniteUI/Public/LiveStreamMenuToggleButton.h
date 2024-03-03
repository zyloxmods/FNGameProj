#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "LiveStreamMenuToggleButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API ULiveStreamMenuToggleButton : public UCommonButton {
    GENERATED_BODY()
public:
    ULiveStreamMenuToggleButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshButton(bool IsLiveStreamEnabled);
    
};

