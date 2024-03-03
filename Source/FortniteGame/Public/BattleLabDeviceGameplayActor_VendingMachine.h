#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BattleLabDeviceGameplayActor.h"
#include "InteractionType.h"
#include "BattleLabDeviceGameplayActor_VendingMachine.generated.h"

class AActor;
class AFortPickup;
class UArrowComponent;
class UBoxComponent;
class UFortItemDefinition;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class ABattleLabDeviceGameplayActor_VendingMachine : public ABattleLabDeviceGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VendingMachineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FunnelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FunnelCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SpawnLootTransformArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootTossSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DroppedIntoFunnelPickup, meta=(AllowPrivateAccess=true))
    AFortPickup* DroppedIntoFunnelPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> StoredItemDefinitions;
    
public:
    ABattleLabDeviceGameplayActor_VendingMachine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
   
    bool ServerOnAttemptInteract(const FInteractionType& InteractType);
    
    UFUNCTION(BlueprintCallable)
    void PreviewImageLoadedFromItemDef(TSoftObjectPtr<UTexture2D> PreviewImage);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void PickupDroppedIntoFunnel(AFortPickup* Pickup);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DroppedIntoFunnelPickup();
    
    UFUNCTION(BlueprintCallable)
    void OnFunnelCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void MachineTookCycleDamage(const int32 NextIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddStoredItemDefinitionMulti(const UFortItemDefinition* InItemDefinition);
    
};

