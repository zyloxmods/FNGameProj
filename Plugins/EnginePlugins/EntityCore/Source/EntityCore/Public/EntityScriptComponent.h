#pragma once
#include "CoreMinimal.h"
#include "EntityTickableComponent.h"
#include "EntityScriptComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYCORE_API UEntityScriptComponent : public UEntityTickableComponent {
    GENERATED_BODY()
public:
    UEntityScriptComponent();
};

