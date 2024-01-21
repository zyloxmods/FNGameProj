#pragma once
#include "CoreMinimal.h"
#include "FortReplayFXState.generated.h"

USTRUCT(BlueprintType)
struct FFortReplayFXState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultParticleLODBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultDepthOfFieldQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideParticleLODBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideDepthOfFieldQuality;
    
    FORTNITEGAME_API FFortReplayFXState();
};

