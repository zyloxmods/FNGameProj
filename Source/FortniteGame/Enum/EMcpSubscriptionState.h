#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMcpSubscriptionState : uint8 
{
	Active,
	Canceled,
	PaymentProcessError,
	BlockedBenefits,
	Unknown,
	EMcpSubscriptionState_MAX,
};
