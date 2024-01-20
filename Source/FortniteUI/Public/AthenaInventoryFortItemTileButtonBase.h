#pragma once
#include "CoreMinimal.h"
#include "FortItemTileButton.h"
#include "AthenaInventoryFortItemTileButtonBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryFortItemTileButtonBase : public UFortItemTileButton {
    GENERATED_BODY()
public:
    UAthenaInventoryFortItemTileButtonBase();
};

