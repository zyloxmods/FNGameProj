#pragma once
#include "CoreMinimal.h"
#include "CrucibleLeaderboardEntry.h"
#include "EFortCrucibleLeaderboardId.h"
#include "EFortCrucibleLeaderboardState.h"
#include "CrucibleLeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FCrucibleLeaderboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCrucibleLeaderboardId LeaderboardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCrucibleLeaderboardState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderboardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrucibleLeaderboardEntry> CurrentCompiledResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenRequestedByUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasHadWorkQueued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumQueries;
    
    FORTNITEGAME_API FCrucibleLeaderboardData();
};

