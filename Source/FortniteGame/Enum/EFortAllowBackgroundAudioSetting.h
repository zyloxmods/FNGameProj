#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAllowBackgroundAudioSetting : uint8 
{
	NotificationsOnly,
	AllSounds,
	Num,
	EFortAllowBackgroundAudioSetting_MAX,
};
