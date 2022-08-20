#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWorldRecordAction : uint8 
{
	SaveWorldOnly,
	SaveZoneAndWorld,
	LoadZoneAndWorld,
	SaveDeployableBasesAndWorld,
	Max_None,
	EFortWorldRecordAction_MAX,
};
