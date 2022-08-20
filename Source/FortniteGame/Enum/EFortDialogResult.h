#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDialogResult : uint8 
{
	Declined,
	Ignored,
	Killed,
	TimedOut,
	Unknown,
	EFortDialogResult_MAX,
};
