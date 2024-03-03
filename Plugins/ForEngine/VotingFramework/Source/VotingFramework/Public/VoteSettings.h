#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VoteSelectionSettings.h"
#include "VoteSettings.generated.h"

USTRUCT(BlueprintType)
struct FVoteSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoteId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocksSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VoteText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoteSelectionSettings> VoteSelections;
    
    VOTINGFRAMEWORK_API FVoteSettings();
};

