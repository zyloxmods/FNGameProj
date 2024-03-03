#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AccumulatedItemEntry.h"
#include "EFortKickReason.h"
#include "FortPlayerState.h"
#include "FortSpectatorZoneArray.h"
#include "OnAccumulatedItemsChangedDelegate.h"
#include "OnBeginSpectatingDelegate.h"
#include "OnCurrentPawnChangedDelegate.h"
#include "OnSpectatingTargetChangedDelegate.h"
#include "OnSpectatorCountChangedDelegate.h"
#include "OnSpectatorsChangedDelegate.h"
#include "ReplicatedStatValues.h"
#include "SimulatedAttributeEntry.h"
#include "FortPlayerStateZone.generated.h"

class AFortCarriedObject;
class AFortPlayerStateZone;
class UFortGadgetItemDefinition;
class UFortItemDefinition;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerStateZone : public AFortPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentPawnChanged OnCurrentPawnChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpectatingTarget, meta=(AllowPrivateAccess=true))
    AFortPlayerStateZone* SpectatingTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortSpectatorZoneArray Spectators;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpectatorsChanged OnSpectatorsRemovedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpectatorCountChanged OnSpectatorCountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpectatingTargetChanged OnSpectatingTargetChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginSpectating OnBeginSpectatingEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFortKickReason KickedFromSessionReason;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedStatValues RS_Zone_Old[35];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortCarriedObject* CarriedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumRejoins, meta=(AllowPrivateAccess=true))
    int32 NumRejoins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OldTotalScoreStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInvincibleDueToUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentSignalInStorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxSignalInStorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AccumulatedItems, meta=(AllowPrivateAccess=true))
    TArray<FAccumulatedItemEntry> AccumulatedItems;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccumulatedItemsChanged OnAccumulatedItemsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSimulatedAttributeEntry> SimulatedAttributes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGadgetItemDefinition* PendingDestroyedGadgetItemDefinition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInAircraft: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasEverSkydivedFromBus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasEverSkydivedFromBusAndLanded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_QuickbarEquippedItems, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> QuickbarEquippedItems;
    
public:
    AFortPlayerStateZone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInAircraft(bool bNewInAircraft);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpectatingTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_QuickbarEquippedItems();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumRejoins();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccumulatedItems();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTriggerOnGadgetTrackedAttributeDestroyedFX(const UFortGadgetItemDefinition* GadgetItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDead() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpectatorCount();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    float GetSimulatedAttributeValue(const FGameplayAttribute& Attribute, const float DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerNameForStreaming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfAccumulatedItem(const UFortWorldItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfAccumulatedBluGlo() const;
    
    UFUNCTION(BlueprintCallable)
    void GetHealthAndShields(float& Health, float& HealthMax, float& Shield, float& ShieldMax);
    
};

