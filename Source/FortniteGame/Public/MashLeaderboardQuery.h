#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "MashLeaderboardQuery.generated.h"

USTRUCT(BlueprintType)
struct FMashLeaderboardQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl RequestingId;
    
    FORTNITEGAME_API FMashLeaderboardQuery();
};

