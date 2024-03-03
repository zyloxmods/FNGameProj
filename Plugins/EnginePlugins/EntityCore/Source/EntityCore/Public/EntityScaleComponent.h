#pragma once
#include "CoreMinimal.h"
#include "EntityDataBackedComponent.h"
#include "EntityScaleComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYCORE_API UEntityScaleComponent : public UEntityDataBackedComponent {
    GENERATED_BODY()
public:
    UEntityScaleComponent();
};

