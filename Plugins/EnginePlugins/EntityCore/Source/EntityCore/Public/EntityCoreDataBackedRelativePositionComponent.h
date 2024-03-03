#pragma once
#include "CoreMinimal.h"
#include "EntityDataBackedComponent.h"
#include "EntityCoreDataBackedRelativePositionComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYCORE_API UEntityCoreDataBackedRelativePositionComponent : public UEntityDataBackedComponent {
    GENERATED_BODY()
public:
    UEntityCoreDataBackedRelativePositionComponent();
};

