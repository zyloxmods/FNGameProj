#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EActionState : uint8 
{
	EquippingItem,
	UsingItem,
	WaitingItemTermination,
	ActionEndedWithNoError,
	ActionEndedWithError,
	EActionState_MAX,
};
