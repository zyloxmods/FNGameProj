#pragma once
#include "CoreMinimal.h"
#include "EAthenaNewsEntryType.generated.h"

UENUM(BlueprintType)
enum class EAthenaNewsEntryType : uint8 {
    Text,
    Item,
    RMTItem,
    Website,
    NavigateToTab,
    SmallNews,
    STWUpsell,
    Challenge,
    SpatialBattlePass,
    BattlePassPurchaseScreen,
    Setting,
    Playlist,
    NavigateToSpatialScreen,
};

