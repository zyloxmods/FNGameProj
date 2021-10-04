#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EVariantUnlockType : uint8
{
	UnlockAll = 0,
	ExclusiveChoice = 1,
	EVariantUnlockType_MAX = 2
};