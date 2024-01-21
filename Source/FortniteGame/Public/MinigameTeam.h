#pragma once
#include "CoreMinimal.h"
#include "MinigameTeam.generated.h"

USTRUCT(BlueprintType)
struct FMinigameTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInitTeamSize;
    
    FORTNITEGAME_API FMinigameTeam();
};

