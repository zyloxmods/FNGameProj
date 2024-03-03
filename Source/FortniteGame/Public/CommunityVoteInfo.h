#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OfferVoteInfo.h"
#include "CommunityVoteInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCommunityVoteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ElectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FOfferVoteInfo> VoteHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastVoteGranted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VotesRemaining;
    
    FCommunityVoteInfo();
};

