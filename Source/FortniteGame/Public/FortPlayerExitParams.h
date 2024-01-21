#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortPlayerExitParams.generated.h"

class AFortPlayerController;
class UFortPlayerExitParams;

UCLASS(Blueprintable)
class UFortPlayerExitParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* ExitingPlayerController;
    
    UFortPlayerExitParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerController* _ExitingPlayerController, UFortPlayerExitParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _ExitingPlayerController);
    
};

