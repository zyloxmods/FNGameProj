#pragma once
#include "CoreMinimal.h"
#include "ControllerComponent.h"
#include "FortControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent : public UControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent();
};

