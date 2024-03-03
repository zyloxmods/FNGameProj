#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VoteRuntime.h"
#include "VoteRuntimeArray.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FVoteRuntimeArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UWorld* WorldRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVoteRuntime> VotingResults;
    
public:
    VOTINGFRAMEWORK_API FVoteRuntimeArray();
};

