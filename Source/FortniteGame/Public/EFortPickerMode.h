#pragma once
#include "CoreMinimal.h"
#include "EFortPickerMode.generated.h"

UENUM(BlueprintType)
enum class EFortPickerMode : uint8 {
    BuildingCategory,
    TrapCategory,
    WeaponCategory,
    SocialCategory,
    Building,
    Trap,
    TrapRadial,
    Weapon,
    Social,
    DirectPickEmote,
    DirectPickSpray,
    SquadQuickChat,
    WeaponsSlotted,
    BattleLabDevice,
    MusicSource,
};

