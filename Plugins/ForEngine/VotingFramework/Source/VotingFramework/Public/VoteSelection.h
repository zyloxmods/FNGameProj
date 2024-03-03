#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VoteSelection.generated.h"

USTRUCT(BlueprintType)
struct FVoteSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoteSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoteId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoteSelectionId;
    
    VOTINGFRAMEWORK_API FVoteSelection();
};

