#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortRespawnLogicData.h"
#include "FortAthenaMutator_JoinInProgressSpawnLocation.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_JoinInProgressSpawnLocation : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData SpawnLogicData;
    
public:
    AFortAthenaMutator_JoinInProgressSpawnLocation();
};

