#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERHIType : uint8 
{
	D3D12,
	Performance,
	ERHIType_MAX,
};
