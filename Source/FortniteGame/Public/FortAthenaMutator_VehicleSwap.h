#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_VehicleSwap.generated.h"

class AFortAthenaVehicle;

UCLASS(Blueprintable)
class AFortAthenaMutator_VehicleSwap : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredCalendarEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAthenaVehicle> OldVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAthenaVehicle> NewVehicleClass;
    
    AFortAthenaMutator_VehicleSwap();
};

