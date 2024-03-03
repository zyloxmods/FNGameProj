#pragma once
#include "CoreMinimal.h"
#include "EConsumerRole.generated.h"

UENUM(BlueprintType)
enum class EConsumerRole : uint8 {
    Server,
    Client,
};

