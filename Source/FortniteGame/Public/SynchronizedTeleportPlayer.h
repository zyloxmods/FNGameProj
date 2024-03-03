#pragma once
#include "CoreMinimal.h"
#include "SynchronizedTeleportPlayer.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FSynchronizedTeleportPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* FortPlayerState;
    
    FORTNITEGAME_API FSynchronizedTeleportPlayer();
};

