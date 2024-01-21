#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortArmoryScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortArmoryScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortArmoryScreen();
};

