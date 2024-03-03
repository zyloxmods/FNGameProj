#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortStartLeavingZoneParams.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable)
class UFortStartLeavingZoneParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerControllerRequestingLeaving;
    
    UFortStartLeavingZoneParams();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _PlayerControllerRequestingLeaving);
    
};

