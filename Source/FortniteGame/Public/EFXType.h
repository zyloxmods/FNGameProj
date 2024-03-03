#pragma once
#include "CoreMinimal.h"
#include "EFXType.generated.h"

UENUM(BlueprintType)
enum class EFXType : uint8 {
    GenericAnimNotify,
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
};

