#pragma once
#include "CoreMinimal.h"
#include "ESettingTab.generated.h"

UENUM(BlueprintType)
enum class ESettingTab : uint8 {
    None,
    Video,
    Game,
    GameUI,
    Brightness,
    Audio,
    Accessibility,
    Input,
    MouseAndKeyboard,
    Controller,
    ControllerSensitivity,
    TouchAndMotion,
    Account,
    CreativeWorld,
    CreativePlayer,
};

