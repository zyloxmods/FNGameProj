#pragma once
#include "CoreMinimal.h"
#include "AthenaPlayerViewModel.h"
#include "AthenaLocalPlayerViewModel.generated.h"

class AFortPlayerControllerAthena;
class AFortPlayerPawn;
class UAthenaIndicatorPlayersCache;

UCLASS(Blueprintable)
class UAthenaLocalPlayerViewModel : public UAthenaPlayerViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaIndicatorPlayersCache* IndicatorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> ListeningForPawnStates;
    
public:
    UAthenaLocalPlayerViewModel();
private:
    UFUNCTION(BlueprintCallable)
    void HandleViewTargetPlayerStateReplicated(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerChangedTeams();
    
};

