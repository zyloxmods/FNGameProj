#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETwoPointSolverRotationA : uint8 
{
	QuerierToPointA,
	PointAToQuerierWithRandomOffset,
	QuerierToPointAWithRandomOffset,
	Custom,
	ETwoPointSolverRotationA_MAX,
};
