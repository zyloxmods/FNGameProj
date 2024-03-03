#pragma once
#include "CoreMinimal.h"
#include "ELeecherStatus.generated.h"

UENUM(BlueprintType)
enum class ELeecherStatus : uint8 {
    NotReady,
    NonLeecher,
    Leecher,
};

