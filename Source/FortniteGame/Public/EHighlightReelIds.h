#pragma once
#include "CoreMinimal.h"
#include "EHighlightReelIds.generated.h"

UENUM(BlueprintType)
enum class EHighlightReelIds : uint8 {
    INVALID,
    MainHighlightReel,
    ShortHighlightReel,
    MicroHighlights,
    EntireGameReel,
    ShortExtendedHighlightReel,
    MediumHighlightReel,
    MediumExtendedHighlightReel,
    ShorterHighlightReel,
    PlayerSpotlightReel,
    PlayerSpotlightNoDeathsReel,
    VATReel,
    COUNT,
};

