#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_ShoppingCart.h"
#include "FortVehicleLayerAnimInstance.h"
#include "FortVehicleLayerAnimInstance_ShoppingCartPassenger.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortVehicleLayerAnimInstance_ShoppingCartPassenger : public UFortVehicleLayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_ShoppingCart ShoppingCartInput;
    
    UFortVehicleLayerAnimInstance_ShoppingCartPassenger();
};

