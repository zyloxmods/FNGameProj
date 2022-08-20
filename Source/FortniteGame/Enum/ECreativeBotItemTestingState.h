#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECreativeBotItemTestingState : uint8 
{
	ITS_Teleporting,
	ITS_Landing,
	ITS_Grant,
	ITS_Equip,
	ITS_Throw,
	ITS_Throwing,
	ITS_Cleanup,
	ITS_MAX,
};
