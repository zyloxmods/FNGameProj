#pragma once
#include "CoreMinimal.h"
#include "EFortPawnDisplayContext.generated.h"

UENUM(BlueprintType)
enum class EFortPawnDisplayContext : uint8 {
    BattleRoyale,
    VaultItemsFromOffer,
    VaultItem,
    VaultItems,
    VaultItemFromDefinition,
    CampaignFrontEndPlayer,
    CampaignNPC,
    CampaignHeroInspect,
    CampaignHeroLoadoutSupport,
    CampaignOutfitPicker,
};

