#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_RespawnWaveTeamData.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FFortAthenaMutator_RespawnWaveTeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplicatedTimeStamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortPlayerStateAthena>> PlayerStates;
    
    FORTNITEGAME_API FFortAthenaMutator_RespawnWaveTeamData();
};

