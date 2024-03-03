#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VoteSessionRuntime.h"
#include "VoteSessionRuntimeArray.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FVoteSessionRuntimeArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UWorld* WorldRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVoteSessionRuntime> VotingSessions;
    
public:
    VOTINGFRAMEWORK_API FVoteSessionRuntimeArray();
};

