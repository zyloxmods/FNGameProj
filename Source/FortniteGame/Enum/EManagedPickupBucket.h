#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EManagedPickupBucket : uint8 
{
	Junk,
	Normal,
	Important,
	EManagedPickupBucket_MAX,
};
