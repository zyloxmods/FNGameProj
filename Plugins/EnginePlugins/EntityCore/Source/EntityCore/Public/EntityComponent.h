#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EntityComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class ENTITYCORE_API UEntityComponent : public UObject {
    GENERATED_BODY()
public:
    UEntityComponent();
};

