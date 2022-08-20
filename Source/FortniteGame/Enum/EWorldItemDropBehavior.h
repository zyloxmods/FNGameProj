#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EWorldItemDropBehavior : uint8 
{
	DestroyOnDrop,
	DropAsPickupDestroyOnEmpty,
	DropAsPickupEvenWhenEmpty,
	EWorldItemDropBehavior_MAX,
};
