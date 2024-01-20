#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortNewPlayerParams.generated.h"

class AFortPlayerController;
class UFortNewPlayerParams;

UCLASS(Blueprintable)
class UFortNewPlayerParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* NewPlayerController;
    
    UFortNewPlayerParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerController* _NewPlayerController, UFortNewPlayerParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _NewPlayerController);
    
};

