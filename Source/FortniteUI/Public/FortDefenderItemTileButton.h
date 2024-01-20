#pragma once
#include "CoreMinimal.h"
#include "FortItemTileButton.h"
#include "FortDefenderItemTileButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDefenderItemTileButton : public UFortItemTileButton {
    GENERATED_BODY()
public:
    UFortDefenderItemTileButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEquipSlotChanged(int32 EquipSlot);
    
};

