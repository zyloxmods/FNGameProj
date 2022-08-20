#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESubGameAccessReason : uint8 
{
	OpenAccess,
	TokenItemAccess,
	XboxHomeSharingAccess,
	XboxServiceOutageAccess,
	LimitedAccess,
	ESubGameAccessReason_MAX,
};
