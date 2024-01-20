#pragma once
#include "CoreMinimal.h"
#include "EPayoutScoringType.h"
#include "TournamentPayoutData.h"
#include "TournamentPayoutThresholdData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FTournamentPayoutThresholdData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPayoutScoringType ScoringType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTournamentPayoutData> PayoutData;
    
    FTournamentPayoutThresholdData();
};

