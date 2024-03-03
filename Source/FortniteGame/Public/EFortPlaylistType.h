#pragma once
#include "CoreMinimal.h"
#include "EFortPlaylistType.generated.h"

UENUM(BlueprintType)
enum class EFortPlaylistType : uint8 {
    Default,
    Playground,
    Creative,
    Creative_LTM,
    BattleLab,
};

