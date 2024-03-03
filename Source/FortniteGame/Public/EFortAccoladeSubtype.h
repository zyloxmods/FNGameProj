#pragma once
#include "CoreMinimal.h"
#include "EFortAccoladeSubtype.generated.h"

UENUM(BlueprintType)
enum class EFortAccoladeSubtype : uint8 {
    NotSet,
    Action,
    Discovery,
    XpToken,
};

