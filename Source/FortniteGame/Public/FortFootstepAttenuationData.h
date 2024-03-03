#pragma once
#include "CoreMinimal.h"
#include "FortFootstepAttenuationData.generated.h"

class USoundAttenuation;

USTRUCT(BlueprintType)
struct FFortFootstepAttenuationData {
    GENERATED_BODY()
public:
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
    
    FORTNITEGAME_API FFortFootstepAttenuationData();
};

