#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortPlayerDBNORevivedParams.generated.h"

class AController;
class AFortPlayerPawn;
class UFortPlayerDBNORevivedParams;

UCLASS(Blueprintable)
class UFortPlayerDBNORevivedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* RevivedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* RevivedBy;
    
    UFortPlayerDBNORevivedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerPawn* _RevivedPlayer, AController* _RevivedBy, UFortPlayerDBNORevivedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerPawn*& _RevivedPlayer, AController*& _RevivedBy);
    
};

