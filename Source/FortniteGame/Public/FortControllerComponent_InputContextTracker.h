#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_InputContextTracker.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_InputContextTracker : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_InputContextTracker();
};

