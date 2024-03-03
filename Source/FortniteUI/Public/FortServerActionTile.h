#pragma once
#include "CoreMinimal.h"
#include "FortServerTileBase.h"
#include "FortServerActionTile.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortServerActionTile : public UFortServerTileBase {
    GENERATED_BODY()
public:
    UFortServerActionTile();
};

