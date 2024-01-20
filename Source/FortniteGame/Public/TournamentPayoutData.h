#pragma once
#include "CoreMinimal.h"
#include "EPayoutRewardType.h"
#include "TournamentPayoutData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FTournamentPayoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPayoutRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamSize;
    
    FTournamentPayoutData();
};

