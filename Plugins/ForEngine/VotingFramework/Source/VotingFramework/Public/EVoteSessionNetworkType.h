#pragma once
#include "CoreMinimal.h"
#include "EVoteSessionNetworkType.generated.h"

UENUM(BlueprintType)
enum class EVoteSessionNetworkType : uint8 {
    NotDetermined,
    DedicatedServer,
    MeshNetwork,
};

