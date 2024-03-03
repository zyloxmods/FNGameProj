#pragma once
#include "CoreMinimal.h"
#include "FortFootstepSurfaceAudioData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortFootstepSurfaceAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundAssets[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundAssetsAbove[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundAssetsBelow[7];
    
    FORTNITEGAME_API FFortFootstepSurfaceAudioData();
};

