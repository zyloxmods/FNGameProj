#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortMinigameGroupStats.h"
#include "FortMinigamePlayerStats.generated.h"

USTRUCT(BlueprintType)
struct FFortMinigamePlayerStats : public FFortMinigameGroupStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl Player;
    
    FORTNITEGAME_API FFortMinigamePlayerStats();
};

