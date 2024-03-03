#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortRestartClientModal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRestartClientModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortRestartClientModal();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonSet(bool InbShouldExit, bool bShouldShow);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
};

