#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortScriptedActionSource : uint8 
{
	Token,
	Manual,
	Max_None,
	EFortScriptedActionSource_MAX,
};
