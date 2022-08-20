#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingHighlightType : uint8 
{
	Interact,
	WillBeDestroyed,
	Quest,
	MAX_None,
	EBuildingHighlightType_MAX,
};
