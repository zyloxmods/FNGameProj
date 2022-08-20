#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortTemplateAccess : uint8 
{
	Trusted,
	Private,
	EFortTemplateAccess_MAX,
};
