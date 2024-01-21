#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCreativeSolarisModal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeSolarisModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortCreativeSolarisModal();
protected:
    UFUNCTION(BlueprintCallable)
    void Save();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseModal();
    
};

