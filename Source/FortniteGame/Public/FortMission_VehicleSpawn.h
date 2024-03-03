#pragma once
#include "CoreMinimal.h"
#include "FortMission.h"
#include "MissionVehicleSpawnSet.h"
#include "FortMission_VehicleSpawn.generated.h"

class AActor;
class UEnvQuery;

UCLASS(Blueprintable)
class AFortMission_VehicleSpawn : public AFortMission {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionVehicleSpawnSet> SpawnSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* SpawnLocationQuery;
    
public:
    AFortMission_VehicleSpawn();
protected:
    UFUNCTION(BlueprintCallable)
    void VehicleDestroyed(AActor* InVehicle);
    
};

