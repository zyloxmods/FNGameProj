#pragma once
#include "CoreMinimal.h"
#include "FortItemTileButton.h"
#include "FortMulchItemTileButton.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMulchItemTileButton : public UFortItemTileButton {
    GENERATED_BODY()
public:
    UFortMulchItemTileButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemChanged_BP(UFortItem* NewItem);
    
};

