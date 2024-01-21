#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaGameOverScreenBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGameOverScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaGameOverScreenBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshInput();
    
    UFUNCTION(BlueprintCallable)
    void GoToBoss();
    
    UFUNCTION(BlueprintCallable)
    bool CanShowGoToBoss();
    
};

