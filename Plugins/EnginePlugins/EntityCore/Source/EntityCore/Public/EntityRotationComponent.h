#pragma once
#include "CoreMinimal.h"
#include "EntityDataBackedComponent.h"
#include "EntityRotationComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYCORE_API UEntityRotationComponent : public UEntityDataBackedComponent {
    GENERATED_BODY()
public:
    UEntityRotationComponent();
};

