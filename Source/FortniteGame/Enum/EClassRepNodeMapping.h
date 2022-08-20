#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EClassRepNodeMapping : uint8 
{
	RelevantAllConnections,
	RelevantAllInsideFortVolume,
	Spatialize_Static,
	Spatialize_Dynamic,
	Spatialize_Dormancy,
	Instance_Dynamic,
	EClassRepNodeMapping_MAX,
};
