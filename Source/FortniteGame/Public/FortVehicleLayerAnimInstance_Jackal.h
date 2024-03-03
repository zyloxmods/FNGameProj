#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_JackalVehicle.h"
#include "FortVehicleLayerAnimInstance.h"
#include "FortVehicleLayerAnimInstance_Jackal.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortVehicleLayerAnimInstance_Jackal : public UFortVehicleLayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_JackalVehicle JackalVehicleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimPitch;
    
    UFortVehicleLayerAnimInstance_Jackal();
};

