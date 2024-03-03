#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortMissionNeutralCompleteParams.generated.h"

class AFortMission;
class UFortMissionNeutralCompleteParams;

UCLASS(Blueprintable)
class UFortMissionNeutralCompleteParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortMission* NeutrallyCompletedMission;
    
    UFortMissionNeutralCompleteParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortMission* _NeutrallyCompletedMission, UFortMissionNeutralCompleteParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortMission*& _NeutrallyCompletedMission);
    
};

