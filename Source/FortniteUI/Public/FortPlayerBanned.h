#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortPlayerBanned.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerBanned : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortPlayerBanned();
};

