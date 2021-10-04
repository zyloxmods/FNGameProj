// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortAlteration.generated.h"

/**
 * 
 */
UENUM()
enum class EFortAlteration
{	AttributeSlot,
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
