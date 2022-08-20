#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBodyPartVisibilityGrouping : uint8 
{
	AllButHead,
	OnlyBackBling,
	BackBlingAndCharm,
	EBodyPartVisibilityGrouping_MAX,
};
