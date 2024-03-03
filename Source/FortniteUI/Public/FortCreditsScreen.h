#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortCreditsScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreditsScreen : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UFortCreditsScreen();
};

