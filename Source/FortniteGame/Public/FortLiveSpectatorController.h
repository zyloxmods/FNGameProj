#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortPlayerControllerSpectating.h"
#include "FortLiveSpectatorController.generated.h"

class AFortPlayerState;

UCLASS(Blueprintable, MinimalAPI)
class AFortLiveSpectatorController : public AFortPlayerControllerSpectating {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* FollowedPlayerState;
    
public:
    AFortLiveSpectatorController();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFollowedPlayer(AFortPlayerState* NewPlayerToFollow, const FVector& SpectatorLocation, bool bValidPos);
    
};

