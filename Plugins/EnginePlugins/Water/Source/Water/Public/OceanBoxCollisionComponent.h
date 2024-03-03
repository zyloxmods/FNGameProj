#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "OceanBoxCollisionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UOceanBoxCollisionComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UOceanBoxCollisionComponent();
};

