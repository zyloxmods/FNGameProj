#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Sound/SoundWave.h"
#include "ChannelData.h"
#include "FortAudioToMPCComponent.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAudioToMPCComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushDataToMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheDataForBlueprintUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChannelData> ChannelDataArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoundWaveSpectralDataPerSound> FFTDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasPlaying;
    
public:
    UFortAudioToMPCComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGatheredFFTData(UPARAM(Ref) TArray<FChannelData>& FFTData, UPARAM(Ref) float& OutAmplitudeAverage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCachedMagnitudeForChannel(int32 ChannelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCachedAverageMagnitude() const;
    
};

