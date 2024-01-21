#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortMissionSucceededParams.generated.h"

class AFortMission;
class UFortMissionSucceededParams;

UCLASS(Blueprintable)
class UFortMissionSucceededParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortMission* SucceededMission;
    
    UFortMissionSucceededParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortMission* _SucceededMission, UFortMissionSucceededParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortMission*& _SucceededMission);
    
};

