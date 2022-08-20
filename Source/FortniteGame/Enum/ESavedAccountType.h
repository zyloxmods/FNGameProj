#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESavedAccountType : uint8 
{
	Facebook,
	Google,
	Epic,
	Device,
	Headless,
	Refresh,
	ESavedAccountType_MAX,
};
