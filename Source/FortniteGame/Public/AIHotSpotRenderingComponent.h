#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "AIHotSpotRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIHotSpotRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UAIHotSpotRenderingComponent();
};

