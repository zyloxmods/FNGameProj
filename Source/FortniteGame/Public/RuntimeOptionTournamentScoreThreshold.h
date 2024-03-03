#pragma once
#include "CoreMinimal.h"
#include "RuntimeOptionTournamentScoreThreshold.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeOptionTournamentScoreThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointsIncrement;
    
    FORTNITEGAME_API FRuntimeOptionTournamentScoreThreshold();
};

