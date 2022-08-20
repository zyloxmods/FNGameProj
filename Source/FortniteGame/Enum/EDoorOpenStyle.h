#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDoorOpenStyle : uint8 
{
	SlamOpen,
	SmashOpen,
	Close,
	EDoorOpenStyle_MAX,
};
