#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortGiftWrapType : uint8 
{
	UserFree,
	UserUnlock,
	UserConsumable,
	Message,
	Ungift,
	EFortGiftWrapType_MAX,
};
