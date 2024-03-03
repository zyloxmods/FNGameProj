#pragma once
#include "CoreMinimal.h"
#include "ELaurelDropItemReason.generated.h"

UENUM(BlueprintType)
namespace ELaurelDropItemReason {
    enum Type {
        Combat,
        Hardy,
        MAX,
    };
}

