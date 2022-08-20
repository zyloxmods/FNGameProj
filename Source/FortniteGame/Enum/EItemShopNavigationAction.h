#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EItemShopNavigationAction : uint8 
{
	ShowOfferDetails,
	NavigateToOffer,
	EItemShopNavigationAction_MAX,
};
