#pragma once
#include "CoreMinimal.h"
#include "FortBroadcastInfoPerPlayer.generated.h"

class AFortBroadcastRemoteClientInfo;
class AFortInventory;
class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FFortBroadcastInfoPerPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortInventory* PlayerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortBroadcastRemoteClientInfo* PlayerClientInfo;
    
    FORTNITEGAME_API FFortBroadcastInfoPerPlayer();
};

