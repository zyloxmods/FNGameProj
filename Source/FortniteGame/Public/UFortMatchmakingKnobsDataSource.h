#pragma once
#include "CoreMinimal.h"
#include "UFortMatchmakingKnobsDataSource.generated.h"

UENUM(BlueprintType)
namespace UFortMatchmakingKnobsDataSource {
    enum Type {
        None,
        Playlist,
        Mutator,
        GameMode,
        Permissions,
        UISettings,
        CreativeGlobalOption,
        Max,
    };
}

