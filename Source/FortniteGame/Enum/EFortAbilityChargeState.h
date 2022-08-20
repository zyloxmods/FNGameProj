#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAbilityChargeState : uint8 
{
	ChargingUp,
	MaxCharge,
	Discharge,
	ChargingDown,
	EFortAbilityChargeState_MAX,
};
