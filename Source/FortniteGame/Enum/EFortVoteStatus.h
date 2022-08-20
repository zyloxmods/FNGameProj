#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortVoteStatus : uint8 
{
	Update,
	End,
	BeginLockout,
	EndLockout,
	EFortVoteStatus_MAX,
};
