#pragma once
#include "CoreMinimal.h"
#include "EPlaylistUIExtensionSlot.generated.h"

UENUM(BlueprintType)
enum class EPlaylistUIExtensionSlot : uint8 {
    Primary,
    TopRightCorner,
    GameInfoBox,
    Quickbar,
    UpperCenter,
    CrosshairRight,
    UnderSquadInfo,
    FullScreenMap,
    BelowRespawnWidget,
    BelowCompass,
    UnderTeammateStatus,
};

