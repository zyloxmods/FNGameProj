#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUnableToLoadReason : uint8 
{
	PackageDoesNotExist,
	EUnableToLoadReason_MAX,
};
