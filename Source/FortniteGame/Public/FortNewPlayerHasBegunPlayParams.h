#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortNewPlayerHasBegunPlayParams.generated.h"

class AFortPlayerController;
class UFortNewPlayerHasBegunPlayParams;

UCLASS(Blueprintable)
class UFortNewPlayerHasBegunPlayParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* NewPlayerPC;
    
    UFortNewPlayerHasBegunPlayParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerController* _NewPlayerPC, UFortNewPlayerHasBegunPlayParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _NewPlayerPC);
    
};

