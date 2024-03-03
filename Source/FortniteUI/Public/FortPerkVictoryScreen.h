#pragma once
#include "CoreMinimal.h"
#include "FortPostGameScreen.h"
#include "FortPerkVictoryScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPerkVictoryScreen : public UFortPostGameScreen {
    GENERATED_BODY()
public:
    UFortPerkVictoryScreen();
};

