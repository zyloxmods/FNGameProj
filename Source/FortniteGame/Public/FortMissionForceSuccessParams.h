#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortMissionForceSuccessParams.generated.h"

class UFortMissionForceSuccessParams;

UCLASS(Blueprintable)
class UFortMissionForceSuccessParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FractionCompleted;
    
    UFortMissionForceSuccessParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(float _FractionCompleted, UFortMissionForceSuccessParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(float& _FractionCompleted);
    
};

