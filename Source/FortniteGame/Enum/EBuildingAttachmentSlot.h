#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingAttachmentSlot : uint8 
{
	SLOT_Wall,
	SLOT_Ceiling,
	SLOT_None,
	SLOT_MAX,
};
