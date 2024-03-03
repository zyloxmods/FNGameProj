#pragma once
#include "CoreMinimal.h"
#include "EntityEnableableComponent.h"
#include "EntityTickableComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYCORE_API UEntityTickableComponent : public UEntityEnableableComponent {
    GENERATED_BODY()
public:
    UEntityTickableComponent();
};

