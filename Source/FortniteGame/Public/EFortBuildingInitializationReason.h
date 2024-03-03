#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingInitializationReason.generated.h"

UENUM(BlueprintType)
enum class EFortBuildingInitializationReason : uint8{
        StaticallyPlaced,
        Spawned,
        Replaced,
        LoadedFromSave,
        DynamicBuilderPlaced,
        PlacementTool,
        TrapTool,
        None,
    };


