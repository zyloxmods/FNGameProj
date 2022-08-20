#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EServerManifestOutputFormat : uint8 
{
	Json,
	HTTP,
	EServerManifestOutputFormat_MAX,
};
