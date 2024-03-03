#pragma once
#include "CoreMinimal.h"
#include "LeaderboardEntry.h"
#include "LatestLeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FLatestLeaderboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLeaderboardEntry> Entries;
    
    FORTNITEUI_API FLatestLeaderboardData();
};

