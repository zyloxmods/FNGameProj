#pragma once
#include "CoreMinimal.h"
#include "FortPvPMission.h"
#include "FortPvPMission_3PtDomination.generated.h"

class ABuildingCapturePointActor;

UCLASS(Blueprintable, MinimalAPI)
class AFortPvPMission_3PtDomination : public AFortPvPMission {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingCapturePointActor*> CapturePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreToWin;
    
public:
    AFortPvPMission_3PtDomination();
protected:
    UFUNCTION(BlueprintCallable)
    void CapturePointSetterHackTimer();
    
};

