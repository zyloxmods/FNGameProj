#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "PlayspaceGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class PLAYSPACESYSTEM_API APlayspaceGameMode : public AGameMode {
    GENERATED_BODY()
public:
    APlayspaceGameMode();
};

