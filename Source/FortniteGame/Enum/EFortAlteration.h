#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAlteration : uint8 
{
	GameplaySlot,
	ComplexCosmeticSlot,
	UserPickedCosmeticSlot,
	ColorSlot,
	HeroSpecializationTier1Slot,
	HeroSpecializationTier2Slot,
	HeroSpecializationTier3Slot,
	HeroSpecializationTier4Slot,
	HeroSpecializationTier5Slot,
	EFortAlteration_MAX,
};
