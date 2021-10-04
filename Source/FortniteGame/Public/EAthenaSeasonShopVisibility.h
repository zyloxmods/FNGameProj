#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"

UENUM()
enum class EAthenaSeasonShopVisibility : uint8
{
	Hide                            = 0,
	ShowIfOffersAvailable           = 1,
	ShowAlways                      = 2,
	EAthenaSeasonShopVisibility_MAX = 3
};