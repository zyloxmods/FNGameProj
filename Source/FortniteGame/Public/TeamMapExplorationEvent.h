#pragma once
#include "CoreMinimal.h"
#include "TeamMapExplorationEvent.generated.h"

USTRUCT(BlueprintType)
struct FTeamMapExplorationEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 ExplorationThreshold;
    
    FORTNITEGAME_API FTeamMapExplorationEvent();
};

