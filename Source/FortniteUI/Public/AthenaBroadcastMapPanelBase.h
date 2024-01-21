#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaBroadcastMapPanelBase.generated.h"

class UFortSpectateClickableMapIcon;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaBroadcastMapPanelBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaBroadcastMapPanelBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapIconAdded(UFortSpectateClickableMapIcon* MapIconIn);
    
};

