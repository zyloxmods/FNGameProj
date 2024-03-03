#pragma once
#include "CoreMinimal.h"
#include "CastedVote.generated.h"

USTRUCT(BlueprintType)
struct FCastedVote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName VoteSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName VoteId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName VoteSelectionId;
    
    VOTINGFRAMEWORK_API FCastedVote();
};

