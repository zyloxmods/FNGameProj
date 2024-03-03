#pragma once
#include "CoreMinimal.h"
#include "PlayspaceGameMode.h"
#include "FortGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortGameModeBase : public APlayspaceGameMode {
    GENERATED_BODY()
public:
    AFortGameModeBase();
};

