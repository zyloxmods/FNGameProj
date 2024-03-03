#pragma once
#include "CoreMinimal.h"
#include "EOfferPurchaseError.generated.h"

UENUM(BlueprintType)
enum class EOfferPurchaseError : uint8 {
    NoError,
    PendingServerConfirmation,
    CannotAffordItem,
    InvalidOfferID,
    InvalidPriceIndex,
    NoneLeft,
    PurchaseAlreadyPending,
    NoConnection,
    AccountNotEligible,
    CannotGiftItem,
    MFANotEnabled,
};

