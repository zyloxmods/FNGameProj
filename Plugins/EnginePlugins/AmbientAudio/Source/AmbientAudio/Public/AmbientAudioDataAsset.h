#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AmbientAudioLoop.h"
#include "AmbientAudioOneShot.h"
#include "AmbientAudioDataAsset.generated.h"

UCLASS(Blueprintable)
class AMBIENTAUDIO_API UAmbientAudioDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAmbientAudioLoop> LoopingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAmbientAudioOneShot> OneShotSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TagCrossfadeTime;
    
    UAmbientAudioDataAsset();
};

