#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAppActivationSoundMixPair.h"
#include "FortAppActivationSoundMixManager.generated.h"

UCLASS(Blueprintable)
class UFortAppActivationSoundMixManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAppActivationSoundMixPair InAppSoundsAllowedMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAppActivationSoundMixPair AppActiveSoundMix;
    
    UFortAppActivationSoundMixManager();
};

