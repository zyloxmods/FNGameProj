#pragma once
#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "FortAthenaSimpleCarMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaSimpleCarMovementComponent : public UWheeledVehicleMovementComponent4W {
    GENERATED_BODY()
public:
    UFortAthenaSimpleCarMovementComponent();
};

