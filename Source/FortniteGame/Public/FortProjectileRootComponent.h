#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "FortProjectileRootComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortProjectileRootComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UFortProjectileRootComponent();
};

