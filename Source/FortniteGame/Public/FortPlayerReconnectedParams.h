#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortPlayerReconnectedParams.generated.h"

class AFortPlayerController;
class UFortPlayerReconnectedParams;

UCLASS(Blueprintable)
class UFortPlayerReconnectedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* ReconnectedPlayerPC;
    
    UFortPlayerReconnectedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerController* _ReconnectedPlayerPC, UFortPlayerReconnectedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _ReconnectedPlayerPC);
    
};

