#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortGameFeatureData.h"
#include "VehiclePropReplacementData.h"
#include "FortValetGameFeatureData.generated.h"

class ABuildingProp;
class AFortAthenaVehicleSpawner;

UCLASS(Blueprintable)
class UFortValetGameFeatureData : public UFortGameFeatureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ABuildingProp>, FVehiclePropReplacementData> PropReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAthenaVehicleSpawner> VehicleSpawnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod;
    
    UFortValetGameFeatureData();
};

