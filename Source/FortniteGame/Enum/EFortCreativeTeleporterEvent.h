#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCreativeTeleporterEvent : uint8 
{
	Exited,
	Enabled,
	Disabled,
	None,
	EFortCreativeTeleporterEvent_MAX,
};
