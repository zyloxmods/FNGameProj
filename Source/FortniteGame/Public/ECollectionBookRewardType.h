#pragma once
#include "CoreMinimal.h"
#include "ECollectionBookRewardType.generated.h"

UENUM(BlueprintType)
enum class ECollectionBookRewardType : uint8 {
    Uninitialized,
    Book,
    Page,
    Section,
};

