#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "FortLayeredAudioFloatParam.h"
#include "OnLayeredAudioComponentOneshotDelegate.h"
#include "FortLayeredAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortLayeredAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTimeWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortLayeredAudioFloatParam> FloatParameters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLayeredAudioComponentOneshot OnOneshotEvent;
    
    UFortLayeredAudioComponent();
    UFUNCTION(BlueprintCallable)
    void StopAllAudio();
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameterExt(FName Name, float Value);
    
};

