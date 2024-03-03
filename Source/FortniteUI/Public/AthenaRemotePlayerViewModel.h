#pragma once
#include "CoreMinimal.h"
#include "AthenaPlayerViewModel.h"
#include "AthenaRemotePlayerViewModel.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;
class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class UAthenaRemotePlayerViewModel : public UAthenaPlayerViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerSpectating* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> SquadList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> NameIndicatedPlayers;
    
public:
    UAthenaRemotePlayerViewModel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer);
    
};

