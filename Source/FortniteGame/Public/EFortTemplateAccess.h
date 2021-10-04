#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"

UENUM()
enum class EFortTemplateAccess : uint8
{
	Normal = 0,
	Trusted = 1,
	Private = 2,
	EFortTemplateAccess_MAX = 3
};