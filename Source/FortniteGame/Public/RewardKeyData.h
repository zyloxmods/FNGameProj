#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RewardKeyData.generated.h"

class UFortAccountItemDefinition;
class UFortTokenType;

USTRUCT(BlueprintType)
struct FRewardKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortTokenType> Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NodeTagMatchReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardKeyMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardKeyInitialCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAccountItemDefinition> UnlockingItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUnlockingItemDisplayName;
    
    FORTNITEGAME_API FRewardKeyData();
};

