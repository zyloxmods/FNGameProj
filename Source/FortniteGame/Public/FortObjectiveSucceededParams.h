#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortObjectiveSucceededParams.generated.h"

class AFortObjectiveBase;
class UFortObjectiveSucceededParams;

UCLASS(Blueprintable)
class UFortObjectiveSucceededParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortObjectiveBase* SucceededObjective;
    
    UFortObjectiveSucceededParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortObjectiveBase* _SucceededObjective, UFortObjectiveSucceededParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortObjectiveBase*& _SucceededObjective);
    
};

