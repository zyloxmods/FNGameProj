#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortBroadcastViewSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBroadcastViewSettings : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortBroadcastViewSettings();
};

