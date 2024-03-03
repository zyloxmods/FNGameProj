#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortEnemyKilledParams.generated.h"

class AFortPawn;
class AFortPlayerController;
class UFortEnemyKilledParams;

UCLASS(Blueprintable)
class UFortEnemyKilledParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* KilledPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* KilledBy;
    
    UFortEnemyKilledParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPawn* _KilledPawn, AFortPlayerController* _KilledBy, UFortEnemyKilledParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPawn*& _KilledPawn, AFortPlayerController*& _KilledBy);
    
};

