#pragma once
#include "CoreMinimal.h"
#include "EFortPhysicsObjectNetworkPolicy.generated.h"

UENUM(BlueprintType)
enum class EFortPhysicsObjectNetworkPolicy : uint8 {
    ClientOnly,
    ServerAuthoritative,
};

