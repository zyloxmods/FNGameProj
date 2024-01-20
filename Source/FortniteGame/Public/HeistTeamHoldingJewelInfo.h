#pragma once
#include "CoreMinimal.h"
#include "HeistTeamHoldingJewelInfo.generated.h"

USTRUCT(BlueprintType)
struct FHeistTeamHoldingJewelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JewelsHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStartedHoldingJewel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedTotalTime;
    
    FORTNITEGAME_API FHeistTeamHoldingJewelInfo();
};

