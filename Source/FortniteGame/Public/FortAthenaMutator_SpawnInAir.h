#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortRespawnLogicData.h"
#include "FortAthenaMutator_SpawnInAir.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_SpawnInAir : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData InitialSpawnLogicData;
    
    AFortAthenaMutator_SpawnInAir();
};

