#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_GolfCart.h"
#include "FortVehicleLayerAnimInstance.h"
#include "FortVehicleLayerAnimInstance_GolfcartPassenger.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortVehicleLayerAnimInstance_GolfcartPassenger : public UFortVehicleLayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_GolfCart GolfCartVehicleInput;
    
    UFortVehicleLayerAnimInstance_GolfcartPassenger();
};

