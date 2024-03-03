#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_Quad.h"
#include "FortVehicleLayerAnimInstance.h"
#include "FortVehicleLayerAnimInstance_ATVPassenger.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortVehicleLayerAnimInstance_ATVPassenger : public UFortVehicleLayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_Quad QuadVehicleInput;
    
    UFortVehicleLayerAnimInstance_ATVPassenger();
};

