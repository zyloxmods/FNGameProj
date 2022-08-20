#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortItemShopSection : uint8 
{
	Featured,
	Daily,
	SpecialFeatured,
	SpecialDaily,
	Standalone,
	CommunityChoice,
	MegaBundle,
	BattlePass,
	MAX_None,
	EFortItemShopSection_MAX,
};
