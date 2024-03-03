#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "FortGameStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameStateComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
    UFortGameStateComponent();
};

