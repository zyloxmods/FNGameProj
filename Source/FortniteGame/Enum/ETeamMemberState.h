#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETeamMemberState : uint8 
{
	FIRST_CHAT_MESSAGE,
	NeedAmmoHeavy,
	NeedAmmoLight,
	NeedAmmoMedium,
	NeedAmmoShells,
	NeedAmmoRocket,
	ChatBubble,
	EnemySpotted,
	NeedBandages,
	NeedMaterials,
	NeedShields,
	NeedWeapon,
	LAST_CHAT_MESSAGE,
	MAX,
};
