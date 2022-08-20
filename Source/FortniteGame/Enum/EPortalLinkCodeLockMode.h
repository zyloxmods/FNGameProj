#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPortalLinkCodeLockMode : uint8 
{
	WindowLocked,
	AlwaysLocked,
	EPortalLinkCodeLockMode_MAX,
};
