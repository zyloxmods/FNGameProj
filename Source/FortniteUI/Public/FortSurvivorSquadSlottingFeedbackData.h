#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortSurvivorSquadSlottingFeedbackData.generated.h"

USTRUCT(BlueprintType)
struct FFortSurvivorSquadSlottingFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HadLeaderMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasLeaderMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> PreviousSetBonusCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> CurrentSetBonusCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousPersonalityMatchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPersonalityMatchCount;
    
    FORTNITEUI_API FFortSurvivorSquadSlottingFeedbackData();
};

