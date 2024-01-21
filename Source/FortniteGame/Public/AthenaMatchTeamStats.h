#pragma once
#include "CoreMinimal.h"
#include "AthenaMatchTeamStats.generated.h"

USTRUCT(BlueprintType)
struct FAthenaMatchTeamStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPlayers;
    
    FORTNITEGAME_API FAthenaMatchTeamStats();
};

