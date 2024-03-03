#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VoteSelectionSettings.generated.h"

USTRUCT(BlueprintType)
struct FVoteSelectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoteSelectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VoteSelectionText;
    
    VOTINGFRAMEWORK_API FVoteSelectionSettings();
};

