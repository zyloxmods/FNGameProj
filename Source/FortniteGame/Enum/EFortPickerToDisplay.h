#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPickerToDisplay : uint8 
{
	WeaponPicker,
	SocialPicker,
	ChatPicker,
	NotePicker,
	EmotePicker,
	SquadQuickChatPicker,
	BattleLabDevicePicker,
	MusicSourcePicker,
	EFortPickerToDisplay_MAX,
};
