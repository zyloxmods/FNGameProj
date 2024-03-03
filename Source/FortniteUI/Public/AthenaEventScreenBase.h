#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaEventScreenBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaEventScreenBase();
};

