#pragma once
#include "CoreMinimal.h"
#include "EFortEncryptionStatus.generated.h"

UENUM(BlueprintType)
enum class EFortEncryptionStatus : uint8 {
    ENCRYPTED,
    RELEASED,
};

