#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortSettingsPressAnyKey.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsPressAnyKey : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortSettingsPressAnyKey();
};

