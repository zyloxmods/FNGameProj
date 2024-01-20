#pragma once
#include "CoreMinimal.h"
#include "EFortVoteArbitratorType.h"
#include "FortVoteConfig.generated.h"

USTRUCT(BlueprintType)
struct FFortVoteConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumVoteOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedVoteLockOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVotesAllowedPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortVoteArbitratorType VoteArbitratorType;
    
    FORTNITEGAME_API FFortVoteConfig();
};

