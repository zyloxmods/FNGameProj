#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.generated.h"

UENUM(BlueprintType)
enum class EUIExtensionSlot : uint8 {
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
    ControllerBindingCallout,
    AboveStormMessageSlot,
    CustomMinigameCallouts,
    UnderLocalPlayerInfo,
    InventoryScreenReplacement,
    Reticle,
    KillfeedSlot,
    PrioritizedContextualSlot,
    MobileHUDBottomRight,
};

