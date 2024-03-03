#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortItemEntry.h"
#include "FortPropertyOverrideReplProvider.h"
#include "PickupInstigator.h"
#include "PickupInstigatorArray.h"
#include "PickupInstigatorData.h"
#include "PickupInstigatorDataUpdatedDelegate.h"
#include "FortPickupInstigatorRegistryComponent.generated.h"

class AActor;
class AFortPawn;
class AFortPickup;
class APlayerController;
class IFortPickupEventHandler;
class UFortPickupEventHandler;
class UFortWorldItemDefinition;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPickupInstigatorRegistryComponent : public UActorComponent, public IFortPropertyOverrideReplProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupInstigatorDataUpdated OnPickupInstigatorDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupInstigatorDataUpdated OnPickupInstigatorDataRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InstigatorRegistry, meta=(AllowPrivateAccess=true))
    FPickupInstigatorArray InstigatorRegistry;
    
public:
    UFortPickupInstigatorRegistryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResolvePendingRepOverrides();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePickupInstigator(UObject* PickupInstigator, int32 ItemIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllItemsForPickupInstigator(UObject* PickupInstigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostReplicateRepOverrides();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InstigatorRegistry();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyPickupSpawned(int32 TrackedIndex, AFortPickup* Pickup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyPickupDropped(int32 TrackedIndex, AFortPickup* Pickup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyPickupCaptured(int32 TrackedIndex, AFortPickup* Pickup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyItemRemoved(int32 TrackedIndex, APlayerController* PlayerController, const FFortItemEntry& ItemEntry);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyItemCaptured(int32 TrackedIndex, APlayerController* PlayerController, const FFortItemEntry& ItemEntry);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePickupDestroyed(AFortPickup* Pickup);
    
    UFUNCTION(BlueprintCallable)
    void HandlePickupClaimed(AFortPickup* Pickup, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* ItemDefinition, FVector PickupLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPickupEventHandler(int32 TrackedIndex, TScriptInterface<IFortPickupEventHandler>& EventHandler) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstigatorData(int32 TrackedIndex, FPickupInstigatorData& InstigatorData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstigator(int32 TrackedIndex, FPickupInstigator& PickupInstigator) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DestroySpawnedPickups(AActor* ActorContext, int32 TrackedIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DestroyDroppedPickups(AActor* ActorContext, int32 TrackedIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearPickupInstigators();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AddPickupInstigator(UObject* PickupInstigator, int32 ItemIndex);
    
    
    // Fix for true pure virtual functions not being implemented
};

