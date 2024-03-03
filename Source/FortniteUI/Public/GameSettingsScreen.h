#pragma once
#include "CoreMinimal.h"
#include "SettingsScreen.h"
#include "GameSettingsScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGameSettingsScreen : public USettingsScreen {
    GENERATED_BODY()
public:
    UGameSettingsScreen();
};

