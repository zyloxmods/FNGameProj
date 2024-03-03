#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "PatrolPointRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPatrolPointRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPatrolPointRenderingComponent();
};

