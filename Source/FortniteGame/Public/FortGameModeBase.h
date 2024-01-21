#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "FortGameModeBase.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeBase : public AGameMode {
    GENERATED_BODY()
public:
    AFortGameModeBase();
};

