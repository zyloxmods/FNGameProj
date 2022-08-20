#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EGyroAcceleration : uint8 
{
	Low,
	Medium,
	High,
	Custom,
	Legacy,
	EGyroAcceleration_MAX,
};
