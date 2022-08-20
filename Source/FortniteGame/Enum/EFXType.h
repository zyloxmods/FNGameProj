#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFXType : uint8 
{
	TrailAnimNotify,
	WeaponImpactEffect,
	WeaponMeleeImpactEffect,
	Contrail,
	Emote,
	Trap,
	Skin,
	Glider,
	Vehicle,
	BackpackBling,
	Water,
	LootChest,
	EnvironmentalAmbient,
	WeaponRangedBeam,
	WeaponBulletShells,
	WeaponMuzzleFlashes,
	PickAxe,
	Curie,
	Projectile,
	EFXType_MAX,
};
