#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "PatrolPathRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPatrolPathRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPatrolPathRenderingComponent();
};

