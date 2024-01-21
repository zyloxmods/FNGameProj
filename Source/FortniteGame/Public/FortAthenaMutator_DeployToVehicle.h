#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_DeployToVehicle.generated.h"

class AFortAthenaVehicle;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_DeployToVehicle : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaVehicle> VehicleClass;
    
public:
    AFortAthenaMutator_DeployToVehicle();
};

