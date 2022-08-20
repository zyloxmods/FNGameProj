#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECloudFileState : uint8 
{
	Saving,
	Loading,
	Idle,
	ECloudFileState_MAX,
};
