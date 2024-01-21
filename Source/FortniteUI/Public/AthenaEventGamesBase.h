#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaEventGamesBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventGamesBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaEventGamesBase();
};

