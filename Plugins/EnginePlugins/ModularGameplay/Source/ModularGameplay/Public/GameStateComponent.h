#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "GameStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameState, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UGameStateComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UGameStateComponent();
};

