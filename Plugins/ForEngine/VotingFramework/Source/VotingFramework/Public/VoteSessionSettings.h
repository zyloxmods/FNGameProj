#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EVoteSessionNetworkType.h"
#include "VoteSettings.h"
#include "VoteSessionSettings.generated.h"

USTRUCT(BlueprintType)
struct FVoteSessionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoteSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VoteSessionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoteSettings> VoteSettingsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoteSessionNetworkType NetworkType;
    
    VOTINGFRAMEWORK_API FVoteSessionSettings();
};

