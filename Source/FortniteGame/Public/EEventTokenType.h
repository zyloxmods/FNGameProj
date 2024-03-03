#pragma once
#include "CoreMinimal.h"
#include "EEventTokenType.generated.h"

UENUM(BlueprintType)
enum class EEventTokenType : uint8 {
    Invite,
    Creation,
};

