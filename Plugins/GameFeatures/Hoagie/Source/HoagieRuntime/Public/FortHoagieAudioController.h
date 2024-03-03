#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortHoagieAudioController.generated.h"

class AFortHoagieVehicle;
class UFortLayeredAudioComponent;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortHoagieAudioController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighQualityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerInHoagie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCriticalDamageNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotorHitNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotorWashActiveNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotorWashRelativeZOffset;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortHoagieVehicle> Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortLayeredAudioComponent* EngineAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortLayeredAudioComponent* RotorAudio;
    
public:
    AFortHoagieAudioController();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void CacheHoagieVehicle(AFortHoagieVehicle* InVehicle);
    
    UFUNCTION(BlueprintCallable)
    void CacheAudioComponents(UFortLayeredAudioComponent* InEngine, UFortLayeredAudioComponent* InRotor);
    
};

