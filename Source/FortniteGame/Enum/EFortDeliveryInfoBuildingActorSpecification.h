#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDeliveryInfoBuildingActorSpecification : uint8 
{
	PlayerBuildable,
	NonPlayerBuildable,
	EFortDeliveryInfoBuildingActorSpecification_MAX,
};
