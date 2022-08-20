#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EIntelStateEnum : uint8 
{
	OnGround,
	HeldByAttacker,
	HeldByDefender,
	Downloaded,
	Captured,
	Downloading,
	EIntelStateEnum_MAX,
};
