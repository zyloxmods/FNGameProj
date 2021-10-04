#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFXType : uint8
{
	GenericAnimNotify = 0,
	TrailAnimNotify = 1,
	WeaponImpactEffect = 2,
	WeaponMeleeImpactEffect = 3,
	Contrail = 4,
	Emote = 5,
	Trap = 6,
	Skin = 7,
	Glider = 8,
	Vehicle = 9,
	BackpackBling = 10,
	Water = 11,
	LootChest = 12,
	EnvironmentalAmbient = 13,
	WeaponRangedBeam = 14,
	WeaponBulletShells = 15,
	WeaponMuzzleFlashes = 16,
	PickAxe = 17,
	Curie = 18,
	Projectile = 19,
	EFXType_MAX = 20
};
