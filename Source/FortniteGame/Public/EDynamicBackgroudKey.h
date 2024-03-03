#pragma once
#include "CoreMinimal.h"
#include "EDynamicBackgroudKey.generated.h"

UENUM(BlueprintType)
enum class EDynamicBackgroudKey : uint8 {
    Lobby,
    Vault,
    Max_None,
};

