#pragma once
#include "CoreMinimal.h"
#include "EFortPickerToDisplay.generated.h"

UENUM(BlueprintType)
enum class EFortPickerToDisplay : uint8 {
    TrapPicker,
    WeaponPicker,
    SocialPicker,
    ChatPicker,
    NotePicker,
    EmotePicker,
    SquadQuickChatPicker,
    BattleLabDevicePicker,
    MusicSourcePicker,
};

