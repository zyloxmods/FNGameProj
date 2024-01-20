#pragma once
#include "CoreMinimal.h"
#include "FortMission.h"
#include "FortPvPMission.generated.h"

class AFortPlayerStatePvP;
class AFortTeamInfo;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AFortPvPMission : public AFortMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStatePvP* WinningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortTeamInfo* WinningTeam;
    
public:
    AFortPvPMission();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

