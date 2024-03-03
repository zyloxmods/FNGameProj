#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortObjectiveFailedParams.generated.h"

class AFortObjectiveBase;
class UFortObjectiveFailedParams;

UCLASS(Blueprintable)
class UFortObjectiveFailedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortObjectiveBase* FailedObjective;
    
    UFortObjectiveFailedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortObjectiveBase* _FailedObjective, UFortObjectiveFailedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortObjectiveBase*& _FailedObjective);
    
};

