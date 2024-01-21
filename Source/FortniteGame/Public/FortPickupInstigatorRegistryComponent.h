#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PickupInstigator.h"
#include "PickupInstigatorArray.h"
#include "PickupInstigatorData.h"
#include "PickupInstigatorDataUpdatedDelegate.h"
#include "FortPickupInstigatorRegistryComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPickupInstigatorRegistryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupInstigatorDataUpdated OnPickupInstigatorDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupInstigatorDataUpdated OnPickupInstigatorDataRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPickupInstigatorArray InstigatorRegistry;
    
public:
    UFortPickupInstigatorRegistryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePickupInstigator(UObject* PickupInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyItemRemoved(int32 TrackedIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMinigameEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstigatorData(int32 TrackedIndex, FPickupInstigatorData& InstigatorData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstigator(int32 TrackedIndex, FPickupInstigator& PickupInstigator) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearPickupInstigators();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AddPickupInstigator(UObject* PickupInstigator);
    
};

