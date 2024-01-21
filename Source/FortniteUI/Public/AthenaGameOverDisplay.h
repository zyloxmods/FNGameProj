#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaGameOverDisplay.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGameOverDisplay : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaGameOverDisplay();
};

