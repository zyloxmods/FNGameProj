#pragma once
#include "CoreMinimal.h"
#include "FortAthenaSeasonStats.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaSeasonStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHighBracket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLowBracket;
    
    FORTNITEGAME_API FFortAthenaSeasonStats();
};

