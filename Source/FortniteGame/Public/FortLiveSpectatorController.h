#pragma once
#include "CoreMinimal.h"
#include "FortPlayerControllerSpectating.h"
#include "FortLiveSpectatorController.generated.h"

class AFortPlayerState;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortLiveSpectatorController : public AFortPlayerControllerSpectating {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* FollowedPlayerState;
    
public:
    AFortLiveSpectatorController();
};

