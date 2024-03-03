#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EVoteSessionNetworkType.h"
#include "EVoteSessionState.h"
#include "VoteSessionRuntime.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FVoteSessionRuntime : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName VoteSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVoteSessionNetworkType NetworkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVoteSessionState VoteSessionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentVoteId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UWorld* WorldRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    EVoteSessionState Shadow_VoteSessionState;
    
public:
    VOTINGFRAMEWORK_API FVoteSessionRuntime();
};

