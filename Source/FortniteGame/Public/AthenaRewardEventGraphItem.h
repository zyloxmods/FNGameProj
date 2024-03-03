#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortAccountItem.h"
#include "RewardKeyState.h"
#include "AthenaRewardEventGraphItem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAthenaRewardEventGraphItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_random_seed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 reward_graph_purchased_timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime unlock_epoch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unlock_keys_used;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool reward_graph_purchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> reward_nodes_claimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> player_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardKeyState> reward_keys;
    
public:
    UAthenaRewardEventGraphItem();
};

