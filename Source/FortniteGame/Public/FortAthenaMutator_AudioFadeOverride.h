#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_AudioFadeOverride.generated.h"

class USoundMix;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_AudioFadeOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* FadeoutSoundMix;
    
public:
    AFortAthenaMutator_AudioFadeOverride();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAudioFade(bool bFadeOut, float FadeTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAudioFade(bool bFadeOut, float FadeTime);
    
};

