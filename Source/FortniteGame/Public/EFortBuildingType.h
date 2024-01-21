#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.generated.h"

UENUM(BlueprintType)
enum class EFortBuildingType : uint8
{
        Wall,
        Floor,
        Corner,
        Deco,
        Prop,
        Stairs,
        Roof,
        Pillar,
        SpawnedItem,
        Container,
        Trap,
        GenericCenterCellActor,
        None,
};

