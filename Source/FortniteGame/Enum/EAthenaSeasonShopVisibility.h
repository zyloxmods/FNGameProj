#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaSeasonShopVisibility : uint8 
{
	ShowIfOffersAvailable,
	ShowAlways,
	EAthenaSeasonShopVisibility_MAX,
};
