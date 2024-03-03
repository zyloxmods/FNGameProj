#pragma once
#include "CoreMinimal.h"
#include "BagelLeaderboardEntry.h"
#include "BagelFriendsLeaderboard.generated.h"

USTRUCT(BlueprintType)
struct FBagelFriendsLeaderboard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBagelLeaderboardEntry> LeaderBoard;
    
    FORTNITEGAME_API FBagelFriendsLeaderboard();
};

