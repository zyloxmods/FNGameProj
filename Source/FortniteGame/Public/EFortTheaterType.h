#pragma once
#include "CoreMinimal.h"
#include "EFortTheaterType.generated.h"

UENUM(BlueprintType)
enum class EFortTheaterType : uint8 {
    Standard,
    Elder,
    PvP,
    PvP2,
    Tutorial,
    TutorialGate,
    Max_None,
};

