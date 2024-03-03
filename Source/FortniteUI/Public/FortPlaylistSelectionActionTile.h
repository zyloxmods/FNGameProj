#pragma once
#include "CoreMinimal.h"
#include "FortNamedServerActionTile.h"
#include "FortPlaylistSelectionActionTile.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlaylistSelectionActionTile : public UFortNamedServerActionTile {
    GENERATED_BODY()
public:
    UFortPlaylistSelectionActionTile();
};

