#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECreativeVendingMachineState : uint8 
{
	AcceptingItem,
	AcceptedItem,
	RejectedItem,
	ECreativeVendingMachineState_MAX,
};
