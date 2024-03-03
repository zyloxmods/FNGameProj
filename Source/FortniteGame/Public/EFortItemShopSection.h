#pragma once
#include "CoreMinimal.h"
#include "EFortItemShopSection.generated.h"

UENUM(BlueprintType)
enum class EFortItemShopSection : uint8 {
    RMTItemOffer,
    Featured,
    Daily,
    SpecialFeatured,
    SpecialDaily,
    Standalone,
    CommunityChoice,
    MegaBundle,
    BattlePass,
    MAX_None,
};

