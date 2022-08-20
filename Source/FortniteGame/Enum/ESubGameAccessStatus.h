#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESubGameAccessStatus : uint8 
{
	LimitedAccess,
	OpenAccess,
	ESubGameAccessStatus_MAX,
};
