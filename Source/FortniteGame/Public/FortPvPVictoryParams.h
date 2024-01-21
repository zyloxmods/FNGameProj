#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortPvPVictoryParams.generated.h"

UCLASS(Blueprintable)
class UFortPvPVictoryParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WinningTeam;
    
    UFortPvPVictoryParams();
};

