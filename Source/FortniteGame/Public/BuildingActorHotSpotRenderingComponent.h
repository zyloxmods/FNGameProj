#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "BuildingActorHotSpotRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBuildingActorHotSpotRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UBuildingActorHotSpotRenderingComponent();
};

