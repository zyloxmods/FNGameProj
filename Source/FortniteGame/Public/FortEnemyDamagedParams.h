#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortEnemyDamagedParams.generated.h"

class AFortPawn;
class AFortPlayerController;
class UFortEnemyDamagedParams;

UCLASS(Blueprintable)
class UFortEnemyDamagedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* DamagedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* DamagedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    UFortEnemyDamagedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPawn* _DamagedPawn, AFortPlayerController* _DamagedBy, float _DamageAmount, UFortEnemyDamagedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPawn*& _DamagedPawn, AFortPlayerController*& _DamagedBy, float& _DamageAmount);
    
};

