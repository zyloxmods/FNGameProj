#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameRewardOverridesInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FGameRewardOverridesInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideRewardsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LootTierGroup;
    
    FGameRewardOverridesInfo();
};

