#pragma once
#include "CoreMinimal.h"
#include "FortMatchmakingRegionState.h"
#include "FortMatchmakingEventsState.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMatchmakingEventsState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFortMatchmakingRegionState> Region;
    
    FFortMatchmakingEventsState();
};

