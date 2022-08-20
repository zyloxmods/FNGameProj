#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCurieApplicationEvent : uint8 
{
	OnBeginOverlap,
	OnEndOverlap,
	MaxValue,
	EFortCurieApplicationEvent_MAX,
};
