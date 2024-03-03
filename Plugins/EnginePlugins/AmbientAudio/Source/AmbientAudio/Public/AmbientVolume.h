#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AmbientVolume.generated.h"

class UAmbientAudioDataAsset;

UCLASS(Blueprintable)
class AMBIENTAUDIO_API AAmbientVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmbientAudioDataAsset* AmbientAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossfadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bGlobal: 1;
    
public:
    AAmbientVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossfadeTime(float NewCrossfadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbientAsset(UAmbientAudioDataAsset* NewAmbientAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
};

