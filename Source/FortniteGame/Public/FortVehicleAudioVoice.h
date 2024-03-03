#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/AudioComponent.h"
#include "FortVehicleAudioFloatParam.h"
#include "FortVehicleAudioOneshotGate.h"
#include "FortVehicleAudioParam.h"
#include "OnVehicleAudioVoiceOneShotDelegate.h"
#include "FortVehicleAudioVoice.generated.h"

class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortVehicleAudioVoice : public UAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LoopingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTimeWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortVehicleAudioOneshotGate> OneshotGates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleAudioVoiceOneShot OnOneshotEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OneShotGateInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortVehicleAudioParam VolumeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortVehicleAudioParam PitchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortVehicleAudioFloatParam> FloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortVehicleAudioFloatParam> ExplicitFloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ParamRange;
    
    UFortVehicleAudioVoice();
    UFUNCTION(BlueprintCallable)
    void StopAllAudio();
    
    UFUNCTION(BlueprintCallable)
    void SetParamRange(float min, float max);
    
    UFUNCTION(BlueprintCallable)
    void SetParamExplicit(FName Name, float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetParam(float Param);
    
};

