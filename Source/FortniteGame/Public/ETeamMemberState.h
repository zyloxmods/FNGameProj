#pragma once
#include "CoreMinimal.h"
#include "ETeamMemberState.generated.h"

UENUM(BlueprintType)
enum class ETeamMemberState : uint8 {
    None,
    FIRST_CHAT_MESSAGE,
    NeedAmmoHeavy = 0x1,
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
    LAST_CHAT_MESSAGE = 0xB,
    MAX,
};

