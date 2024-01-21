#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortPlayerDiedParams.generated.h"

class AController;
class AFortPlayerPawn;
class UFortPlayerDiedParams;

UCLASS(Blueprintable)
class UFortPlayerDiedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* KilledPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* KilledPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* KilledBy;
    
    UFortPlayerDiedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerPawn* _KilledPlayer, AController* _KilledPlayerController, AController* _KilledBy, UFortPlayerDiedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerPawn*& _KilledPlayer, AController*& _KilledPlayerController, AController*& _KilledBy);
    
};

