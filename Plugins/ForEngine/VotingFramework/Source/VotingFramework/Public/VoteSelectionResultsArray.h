#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VoteSelectionResults.h"
#include "VoteSelectionResultsArray.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FVoteSelectionResultsArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UWorld* WorldRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVoteSelectionResults> VoteSelectionResults;
    
public:
    VOTINGFRAMEWORK_API FVoteSelectionResultsArray();
};

