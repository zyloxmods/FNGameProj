#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCalibrateBrightnessScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCalibrateBrightnessScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortCalibrateBrightnessScreen();
};

