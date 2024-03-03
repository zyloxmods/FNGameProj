#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKPermission.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKPermission : uint8 {
    Granted,
    Denied,
    MustAsk,
    Unknown,
    MAX,
};

