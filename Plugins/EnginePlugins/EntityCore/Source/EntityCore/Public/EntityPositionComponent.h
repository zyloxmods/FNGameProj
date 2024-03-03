#pragma once
#include "CoreMinimal.h"
#include "EntityDataBackedComponent.h"
#include "EntityPositionComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYCORE_API UEntityPositionComponent : public UEntityDataBackedComponent {
    GENERATED_BODY()
public:
    UEntityPositionComponent();
};

