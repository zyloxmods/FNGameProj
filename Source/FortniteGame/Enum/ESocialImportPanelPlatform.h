#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESocialImportPanelPlatform : uint8 
{
	VK,
	Steam,
	Xbox,
	Playstation,
	Switch,
	None,
	ESocialImportPanelPlatform_MAX,
};
