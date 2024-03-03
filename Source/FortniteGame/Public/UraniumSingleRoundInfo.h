#pragma once
#include "CoreMinimal.h"
#include "UraniumSingleRoundInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FUraniumSingleRoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 RoundTeamWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FText RoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USoundBase* RoundSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 PointsForWinning;
    
    FORTNITEGAME_API FUraniumSingleRoundInfo();
};

