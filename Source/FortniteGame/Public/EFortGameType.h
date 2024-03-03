#pragma once
#include "CoreMinimal.h"
#include "EFortGameType.generated.h"

UENUM()
enum class EFortGameType : int32 {
    BR,
    Creative,
    CreativeLTM,
    Playground,
    STW,
    BRArena,
    BRLTM,
    Social,
    MAX,
};

