#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkNodeType.generated.h"

UENUM(BlueprintType)
enum class EMeshNetworkNodeType : uint8 {
    Root,
    Inner,
    Edge,
    Client,
    Unknown,
};

