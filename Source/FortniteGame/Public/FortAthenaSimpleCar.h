#pragma once
#include "CoreMinimal.h"
#include "FortAthenaVehicle.h"
#include "FortAthenaSimpleCar.generated.h"

class UFortAthenaSimpleCarMovementComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AFortAthenaSimpleCar : public AFortAthenaVehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaSimpleCarMovementComponent* WheeledVehicleMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
public:
    AFortAthenaSimpleCar();
};

