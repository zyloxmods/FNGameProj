#pragma once
#include "CoreMinimal.h"
#include "PlayerStateComponent.h"
#include "FortPlayerStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPlayerStateComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
    UFortPlayerStateComponent();
};

