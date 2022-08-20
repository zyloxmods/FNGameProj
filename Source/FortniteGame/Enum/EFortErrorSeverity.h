#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortErrorSeverity : uint8 
{
	Silent,
	Passive,
	Blocking,
	SevereBlocking,
	EFortErrorSeverity_MAX,
};
