#pragma once
#include "CoreMinimal.h"
#include "EFortNavLinkPattern.generated.h"

UENUM(BlueprintType)
namespace EFortNavLinkPattern {
    enum Type {
        Floor,
        Stairs,
        Roof,
        Manual,
    };
}

