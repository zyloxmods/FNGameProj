#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortVoteArbitratorType : uint8 
{
	Majority,
	Unanimous,
	EFortVoteArbitratorType_MAX,
};
