#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHighlightReelIds : uint8 
{
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
	EHighlightReelIds_MAX,
};
