#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortDisconnectedPlayerReservation.generated.h"

USTRUCT(BlueprintType)
struct FFortDisconnectedPlayerReservation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerID;
    
    FORTNITEGAME_API FFortDisconnectedPlayerReservation();
};

