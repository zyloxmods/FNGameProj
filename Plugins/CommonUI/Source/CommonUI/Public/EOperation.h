#pragma once
#include "CoreMinimal.h"
#include "EOperation.generated.h"

UENUM(BlueprintType)
enum class EOperation : uint8 {
    Intro,
    Outro,
    Push,
    Pop,
    Invalid,
};

