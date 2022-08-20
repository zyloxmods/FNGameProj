#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortNotificationPriority : uint8 
{
	Friend,
	BoostedXP,
	TwitchHigh,
	GeneralSendNotification,
	TwitchLow,
	Max,
};
