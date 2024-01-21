#pragma once
#include "CoreMinimal.h"
#include "GridPickerTileEventDelegate.generated.h"

class UFortGridPickerTile;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGridPickerTileEvent, UObject*, Data, UFortGridPickerTile*, Tile);

