#pragma once
#include "CoreMinimal.h"
#include "FortMinigameGroupStats.h"
#include "FortMinigameTeamStats.generated.h"

USTRUCT(BlueprintType)
struct FFortMinigameTeamStats : public FFortMinigameGroupStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    FORTNITEGAME_API FFortMinigameTeamStats();
};

