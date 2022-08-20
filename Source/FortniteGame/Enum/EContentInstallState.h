#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EContentInstallState : uint8 
{
	Pending,
	Installed,
	Unknown,
	Error,
	EContentInstallState_MAX,
};
