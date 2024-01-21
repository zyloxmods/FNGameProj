#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortMissionFailedParams.generated.h"

class AFortMission;
class UFortMissionFailedParams;

UCLASS(Blueprintable)
class UFortMissionFailedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortMission* FailedMission;
    
    UFortMissionFailedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortMission* _FailedMission, UFortMissionFailedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortMission*& _FailedMission);
    
};

