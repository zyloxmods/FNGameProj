#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPartyMemberReadyCheckStatus : uint8 
{
	InProgress,
	Complete,
	Canceled,
	EFortPartyMemberReadyCheckStatus_MAX,
};
