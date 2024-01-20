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

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerStateZone : public AFortPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentPawnChanged OnCurrentPawnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpectatingTarget, meta=(AllowPrivateAccess=true))
    AFortPlayerStateZone* SpectatingTarget;
    
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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFortKickReason KickedFromSessionReason;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedStatValues RS_Zone_Old[34];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortCarriedObject* CarriedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumRejoins, meta=(AllowPrivateAccess=true))
    int32 NumRejoins;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OldTotalScoreStat;
    
public:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AccumulatedItems, meta=(AllowPrivateAccess=true))
    TArray<FAccumulatedItemEntry> AccumulatedItems;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccumulatedItemsChanged OnAccumulatedItemsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSimulatedAttributeEntry> SimulatedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGadgetItemDefinition* PendingDestroyedGadgetItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasEverSkydivedFromBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasEverSkydivedFromBusAndLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_QuickbarEquippedItems, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> QuickbarEquippedItems;
    
public:
    AFortPlayerStateZone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

