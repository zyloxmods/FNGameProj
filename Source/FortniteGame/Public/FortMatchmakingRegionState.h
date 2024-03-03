#pragma once
#include "CoreMinimal.h"
#include "FortMatchmakingRegionState.generated.h"

USTRUCT(BlueprintType)
struct FFortMatchmakingRegionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> EventFlagsForcedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> EventFlagsForcedOff;
    
    FORTNITEGAME_API FFortMatchmakingRegionState();
};

