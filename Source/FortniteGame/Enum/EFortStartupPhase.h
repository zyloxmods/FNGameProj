#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortStartupPhase : uint8 
{
	EarlyStartupLoading,
	EarlyStartupFinished,
	GameStartupLoading,
	GameStartupFinished,
	Invalid,
	Count,
	EFortStartupPhase_MAX,
};
