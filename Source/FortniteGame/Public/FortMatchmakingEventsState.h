#pragma once
#include "CoreMinimal.h"
#include "FortMatchmakingRegionState.h"
#include "FortMatchmakingEventsState.generated.h"

USTRUCT(BlueprintType)
struct FFortMatchmakingEventsState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFortMatchmakingRegionState> Region;
    
    FORTNITEGAME_API FFortMatchmakingEventsState();
};

