#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDeployableBaseConstructionStatus : uint8 
{
	Destroying,
	Finished,
	EDeployableBaseConstructionStatus_MAX,
};
