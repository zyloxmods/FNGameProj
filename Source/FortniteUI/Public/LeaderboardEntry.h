#pragma once
#include "CoreMinimal.h"
#include "LeaderboardEntry.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderboardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderboardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDetailsPanel;
    
    FORTNITEUI_API FLeaderboardEntry();
};

