#pragma once
#include "CoreMinimal.h"
#include "FortFootstepAudioData.generated.h"

class USoundAttenuation;
class USoundBase;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortFootstepAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundAssets[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundAssetsAbove[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundAssetsBelow[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* SoundAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* SoundAttenuationAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* SoundAttenuationBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* SoundAttenuationAboveOrBelowAndVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
    FFortFootstepAudioData();
};

