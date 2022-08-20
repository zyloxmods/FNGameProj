#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBackupSaveState : uint8 
{
	InProgress,
	OnCooldown,
	EBackupSaveState_MAX,
};
