#pragma once
#include "CoreMinimal.h"
#include "EBuildingWallArea.generated.h"

UENUM(BlueprintType)
namespace EBuildingWallArea {
    enum Type {
        Regular,
        Flat,
        Special,
    };
}

