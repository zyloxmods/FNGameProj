#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkRelevancy.generated.h"

UENUM(BlueprintType)
enum class EMeshNetworkRelevancy : uint8 {
    NotRelevant,
    RelevantToEdgeNodes,
    RelevantToClients,
};

