#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.generated.h"

UENUM(BlueprintType)
enum class EAthenaCustomizationCategory : uint8 {
    None,
    Glider,
    Pickaxe,
    Hat,
    Backpack,
    Character,
    LoadingScreen,
    BattleBus,
    VehicleDecoration,
    CallingCard,
    MapMarker,
    Dance,
    ConsumableEmote,
    VictoryPose,
    SkyDiveContrail,
    MusicPack,
    ItemWrap,
    PetSkin,
    Charm,
    RegCosmeticDef,
    Loadout,
    SaveLoadout,
    MAX,
};

