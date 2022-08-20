#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EKeepContainerType : uint8 
{
	Storeroom,
	FirstAid,
	Armory,
	Workshop,
	AmmoStash,
	Max,
};
