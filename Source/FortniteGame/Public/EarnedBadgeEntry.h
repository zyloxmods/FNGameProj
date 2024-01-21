#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EFortRewardType.h"
#include "EarnedBadgePlayerData.h"
#include "EarnedBadgeEntry.generated.h"

class UFortBadgeItemDefinition;

USTRUCT(BlueprintType)
struct FEarnedBadgeEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortBadgeItemDefinition* Badge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEarnedBadgePlayerData> PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortRewardType::Type> RewardType;
    
    FORTNITEGAME_API FEarnedBadgeEntry();
};

