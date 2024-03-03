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
    FUniqueNetIdRepl PlayerId;
    
    FORTNITEGAME_API FFortDisconnectedPlayerReservation();
};

