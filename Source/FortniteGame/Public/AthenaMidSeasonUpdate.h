#pragma once
#include "CoreMinimal.h"
#include "AthenaMidSeasonUpdateItemReq.h"
#include "AthenaMidSeasonUpdateQuestReq.h"
#include "AthenaRewardScheduleLevel.h"
#include "AthenaMidSeasonUpdate.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FAthenaMidSeasonUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeasonLevelRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BookLevelRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeasonPurchasedRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaMidSeasonUpdateItemReq> ItemRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaMidSeasonUpdateQuestReq> QuestRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardScheduleLevel Grants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortItemDefinition>> Removals;
    
    FORTNITEGAME_API FAthenaMidSeasonUpdate();
};

