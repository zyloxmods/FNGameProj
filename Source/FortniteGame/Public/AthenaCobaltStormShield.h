#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortMissionStormShield.h"
#include "AthenaCobaltStormShield.generated.h"

class AFortAthenaMutator_Cobalt;
class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API AAthenaCobaltStormShield : public AFortMissionStormShield {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ShieldBoundarySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowpassAudioListenerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowpassAudioValueOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowpassAudioValueInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowpassAudioInterpSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Cobalt* CachedMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ShrinkTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ClientShrinkTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientStormShieldShrinkTimerValue, meta=(AllowPrivateAccess=true))
    float ClientStormShieldShrinkTimerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShieldBoundaryAudio;
    
public:
    AAthenaCobaltStormShield();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void StormShieldShrinkTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientStormShieldShrinkTimerValue();
    
    UFUNCTION(BlueprintCallable)
    void ClientStormShieldShrinkTimerComplete();
    
};

