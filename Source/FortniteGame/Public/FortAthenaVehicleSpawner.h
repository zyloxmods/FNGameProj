#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAthenaVehicleSpawner.generated.h"

class AFortAthenaVehicle;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaVehicleSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAthenaVehicle> VehicleClass;
    
    AFortAthenaVehicleSpawner();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetVehicleClass();
    
};

