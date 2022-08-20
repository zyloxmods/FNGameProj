#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMiniMapComponentDiscoverableVisibility : uint8 
{
	NotVisible,
	Visible_NotDiscovered,
	Discovered,
	EMiniMapComponentDiscoverableVisibility_MAX,
};
