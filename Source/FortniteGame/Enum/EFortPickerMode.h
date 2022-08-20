#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPickerMode : uint8 
{
	TrapCategory,
	WeaponCategory,
	SocialCategory,
	Building,
	Trap,
	TrapRadial,
	Weapon,
	Social,
	DirectPickEmote,
	DirectPickSpray,
	SquadQuickChat,
	WeaponsSlotted,
	BattleLabDevice,
	MusicSource,
	EFortPickerMode_MAX,
};
