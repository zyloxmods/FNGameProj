#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "PlayspaceGameStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UPlayspaceGameStateComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
    UPlayspaceGameStateComponent();
};

