#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortObjectiveNeutralCompleteParams.generated.h"

class AFortObjectiveBase;
class UFortObjectiveNeutralCompleteParams;

UCLASS(Blueprintable)
class UFortObjectiveNeutralCompleteParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortObjectiveBase* NeutrallyCompletedObjective;
    
    UFortObjectiveNeutralCompleteParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortObjectiveBase* _NeutrallyCompletedObjective, UFortObjectiveNeutralCompleteParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortObjectiveBase*& _NeutrallyCompletedObjective);
    
};

