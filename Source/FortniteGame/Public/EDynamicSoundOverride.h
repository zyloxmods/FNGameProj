#pragma once
#include "CoreMinimal.h"
#include "EDynamicSoundOverride.generated.h"

UENUM(BlueprintType)
namespace EDynamicSoundOverride {
    enum Type {
        Cue,
        Wave,
        Class,
    };
}

