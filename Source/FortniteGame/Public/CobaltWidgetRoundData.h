#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetMatchData.h"
#include "CobaltWidgetRoundData.generated.h"

USTRUCT(BlueprintType)
struct FCobaltWidgetRoundData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 RoundNumber;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 FirstRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCobaltWidgetMatchData> CurrentRoundMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> PreviousRoundWinners;
    
    FORTNITEGAME_API FCobaltWidgetRoundData();
};

