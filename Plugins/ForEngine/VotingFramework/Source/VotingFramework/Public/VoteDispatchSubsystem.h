#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VoteSelectionResults.h"
#include "VoteDispatchSubsystem.generated.h"

UCLASS(Blueprintable)
class UVoteDispatchSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVoteSelectionResults> VotingResults;
    
public:
    UVoteDispatchSubsystem();
};

