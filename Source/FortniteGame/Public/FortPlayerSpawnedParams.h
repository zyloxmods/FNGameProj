#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortPlayerSpawnedParams.generated.h"

class AFortPlayerController;
class UFortPlayerSpawnedParams;

UCLASS(Blueprintable)
class UFortPlayerSpawnedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* SpawnedPlayerController;
    
    UFortPlayerSpawnedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerController* _SpawnedPlayerController, UFortPlayerSpawnedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _SpawnedPlayerController);
    
};

