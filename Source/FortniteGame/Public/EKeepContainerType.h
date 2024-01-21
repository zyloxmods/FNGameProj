#pragma once
#include "CoreMinimal.h"
#include "EKeepContainerType.generated.h"

UENUM(BlueprintType)
enum class EKeepContainerType : uint8 {
    Base,
    Storeroom,
    FirstAid,
    Armory,
    Workshop,
    AmmoStash,
    Max,
};

