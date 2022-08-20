#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EOfferPurchaseError : uint8 
{
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
	EOfferPurchaseError_MAX,
};
