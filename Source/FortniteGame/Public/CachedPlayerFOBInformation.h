#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "CachedPlayerFOBInformation.generated.h"

USTRUCT(BlueprintType)
struct FCachedPlayerFOBInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    FORTNITEGAME_API FCachedPlayerFOBInformation();
};

