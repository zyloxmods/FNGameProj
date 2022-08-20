#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPlayerBanReasons : uint8 
{
	Afk_Leeching,
	Harassment,
	TradeScamming,
	Exploiting,
	Competitive,
	Creative,
	TeamingWithCheater,
	EPlayerBanReasons_MAX,
};
