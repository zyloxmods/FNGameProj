#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "EFortCustomMovement.h"
#include "FortAttributeInitializationKey.h"
#include "FortGameplayEffectContainerSpec.h"
#include "FortPlayerPawnAthena.h"
#include "Templates/SubclassOf.h"
#include "FortRemoteControlledPawnAthena.generated.h"

class AActor;
class AFortPlayerControllerAthena;
class UFortAbilitySystemComponent;
class UFortCameraMode;
class UFortRemoteControlPawnSet;
class UGameplayEffect;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortRemoteControlledPawnAthena : public AFortPlayerPawnAthena {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCurrentlyDelayingLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerFuseStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RCTeam;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ControllingPlayerPawn, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawnAthena> ControllingPlayerPawn;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawnAthena> SpectateReturnPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_OverrideAbilitySystemComponent, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* OverrideAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TriggeredHealthThreshold, meta=(AllowPrivateAccess=true))
    float TriggeredHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayEffectContainerSpec> EffectContainerSpecToApplyOnKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRemoteControlPawnSet* RemoteControlPawnSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TriggeredForDestroy, meta=(AllowPrivateAccess=true))
    bool bTriggeredForDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> RemoteControlledPawnDefaultCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> RemoteControlledPawnTriggeredCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ControllingPlayerEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle ControllingPlayerEffectHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsKeyboardTurnPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsKeyboardLookPressed;
    
public:
    AFortRemoteControlledPawnAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerDestroyRemoteControlPawn();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupRemoteControlPawn(AFortPlayerControllerAthena* InFortPC, AFortPlayerPawnAthena* InControllingPawn, TEnumAsByte<EFortCustomMovement::Type> CustomMovementType, const TArray<FFortGameplayEffectContainerSpec>& EffectContainerSpecOnKill);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggeredHealthThreshold(float PreviousTriggeredHealthThreshold, float CurrentTriggeredHealthThreshold);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TriggeredHealthThreshold(float PreviousTriggeredHealthThreshold);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TriggeredForDestroy();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverrideAbilitySystemComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControllingPlayerPawn();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnDoKill();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnClientSetupRemoteControlPawn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCapsuleTouch(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsCurrentlyDelayingLaunch() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleControllingPlayerOutOfHealth();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOutOfHealthExplodeDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLaunchDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuseLength() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

