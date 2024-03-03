#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.generated.h"

UENUM(BlueprintType)
namespace EFortBuildingType {
    enum Type {
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
}

