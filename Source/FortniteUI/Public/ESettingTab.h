#pragma once
#include "CoreMinimal.h"
#include "ESettingTab.generated.h"

UENUM(BlueprintType)
enum class ESettingTab : uint8 {
    None,
    Video,
    Game,
    Brightness,
    Audio,
    Accessibility,
    Input,
    Controller,
    Account,
    CreativeWorld,
    CreativePlayer,
};

