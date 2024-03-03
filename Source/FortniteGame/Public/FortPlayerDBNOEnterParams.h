#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortPlayerDBNOEnterParams.generated.h"

class AController;
class AFortPlayerPawn;
class UFortPlayerDBNOEnterParams;

UCLASS(Blueprintable)
class UFortPlayerDBNOEnterParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* KilledPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* KilledBy;
    
    UFortPlayerDBNOEnterParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerPawn* _KilledPlayer, AController* _KilledBy, UFortPlayerDBNOEnterParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerPawn*& _KilledPlayer, AController*& _KilledBy);
    
};

