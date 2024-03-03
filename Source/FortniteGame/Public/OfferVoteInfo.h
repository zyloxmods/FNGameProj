#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OfferVoteInfo.generated.h"

USTRUCT(BlueprintType)
struct FOfferVoteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime FirstVoteAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastVoteAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoteCount;
    
    FORTNITEGAME_API FOfferVoteInfo();
};

