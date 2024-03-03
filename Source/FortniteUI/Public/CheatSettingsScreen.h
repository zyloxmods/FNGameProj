#pragma once
#include "CoreMinimal.h"
#include "SettingsScreen.h"
#include "CheatSettingsScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCheatSettingsScreen : public USettingsScreen {
    GENERATED_BODY()
public:
    UCheatSettingsScreen();
};

