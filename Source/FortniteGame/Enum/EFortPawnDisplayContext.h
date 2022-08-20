#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPawnDisplayContext : uint8 
{
	VaultItemsFromOffer,
	VaultItem,
	VaultItems,
	VaultItemFromDefinition,
	CampaignFrontEndPlayer,
	CampaignNPC,
	CampaignHeroInspect,
	CampaignHeroLoadoutSupport,
	CampaignOutfitPicker,
	EFortPawnDisplayContext_MAX,
};
