#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortContentEncryptionAllowedReferences : uint8 
{
	SoftOnly,
	Any,
	EFortContentEncryptionAllowedReferences_MAX,
};
