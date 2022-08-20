#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAnnouncementDelivery : uint8 
{
	Received,
	Ignored,
	Active,
	Stopped,
	Max_None,
	EFortAnnouncementDelivery_MAX,
};
