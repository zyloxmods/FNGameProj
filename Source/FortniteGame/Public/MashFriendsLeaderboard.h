#pragma once
#include "CoreMinimal.h"
#include "MashLeaderboardEntry.h"
#include "MashFriendsLeaderboard.generated.h"

USTRUCT(BlueprintType)
struct FMashFriendsLeaderboard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMashLeaderboardEntry> LeaderBoard;
    
    FORTNITEGAME_API FMashFriendsLeaderboard();
};

