#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortActivityView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityView : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortActivityView();
};

