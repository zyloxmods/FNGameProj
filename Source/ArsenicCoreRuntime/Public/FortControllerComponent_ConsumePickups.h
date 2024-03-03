#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortInterface_OverrideCanInteract.h"
#include "AttributeSet.h"
#include "Templates/SubclassOf.h"
#include "FortControllerComponent_ConsumePickups.generated.h"

class AActor;
class AFortAthenaMutator_ConsumePickups;
class UFortWorldItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_ConsumePickups : public UFortControllerComponent, public IFortInterface_OverrideCanInteract {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ConsumePickups, meta=(AllowPrivateAccess=true))
    uint8 bConsumePickups: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ClassOfCosmeticActorToSpawnOnPickupBeingConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxDistanceToPickupBeingConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> ItemsToDropOnDeath;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_ConsumePickups> ConsumePickupsMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorSpawnedOnPickupThatIsBeingConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PickupActorBeingConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PickupActorThatWasLastConsumed;
    
public:
    UFortControllerComponent_ConsumePickups();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetPickupBeingConsumed(AActor* InPickupActorBeingConsumed);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetPickupBeingConsumed(AActor* InPickupActorBeingConsumed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ConsumePickups();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInteractLongUseChanged(bool bPlayerHasStartedALongUseInteraction, bool bLongUseInteractionCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemConsumed(const UFortWorldItem* ConsumedItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPickupThatWasLastConsumed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPickupBeingConsumed();
    
    
    // Fix for true pure virtual functions not being implemented
};

