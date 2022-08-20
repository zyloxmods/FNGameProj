#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCrucibleStatSource : uint8 
{
	Backend,
	CurrentSession,
	EFortCrucibleStatSource_MAX,
};
