#pragma once
#include "CoreMinimal.h"
#include "ECardPackPurchaseError.generated.h"

UENUM(BlueprintType)
enum class ECardPackPurchaseError : uint8 {
    PendingServerConfirmation,
    CannotAffordItem,
    NoneLeft,
    PurchaseAlreadyPending,
    NoConnection,
};

