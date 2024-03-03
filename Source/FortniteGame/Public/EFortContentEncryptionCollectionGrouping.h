#pragma once
#include "CoreMinimal.h"
#include "EFortContentEncryptionCollectionGrouping.generated.h"

UENUM()
enum class EFortContentEncryptionCollectionGrouping : int32 {
    Individual,
    Combined,
    ByCosmeticSet,
};

