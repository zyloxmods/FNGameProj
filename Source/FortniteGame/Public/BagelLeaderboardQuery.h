#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "BagelLeaderboardQuery.generated.h"

USTRUCT(BlueprintType)
struct FBagelLeaderboardQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl RequestingId;
    
    FORTNITEGAME_API FBagelLeaderboardQuery();
};

