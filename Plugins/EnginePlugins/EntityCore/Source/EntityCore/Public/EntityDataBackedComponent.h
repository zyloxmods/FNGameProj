#pragma once
#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "EntityDataBackedComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class ENTITYCORE_API UEntityDataBackedComponent : public UEntityComponent {
    GENERATED_BODY()
public:
    UEntityDataBackedComponent();
};

