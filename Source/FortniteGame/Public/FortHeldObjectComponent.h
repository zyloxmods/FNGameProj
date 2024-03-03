#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "CollisionResponseRestoreState.h"
#include "EHeldObjectState.h"
#include "HeldObjectMovementReplicatedData.h"
#include "HeldObjectThrownData.h"
#include "Templates/SubclassOf.h"
#include "FortHeldObjectComponent.generated.h"

class AActor;
class AController;
class AFortDecoPreview;
class AFortPlayerPawn;
class AFortWeapon;
class UFortPhysicsObjectComponent;
class UFortProjectileMovementComponent;
class UFortWeaponItemDefinition;
class UFortWorldItem;
class UMaterialInterface;
class UMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortHeldObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHeldObjectThrownLanded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHeldObjectThrown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHeldObjectPlaced);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHeldObjectPickedUp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHeldObjectDropped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHeldObjectDestroy);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponItemDefinition> EquippedWeaponItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeldObjectThrownData HeldObjectThrownData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachmentOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule PlayerAttachmentScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlocksVehicleDriverSeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyAngularImpulseOnThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ThrowAngularImpulseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> PreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortDecoPreview> PlacementPreviewClass;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeldObjectPickedUp OnHeldObjectPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeldObjectPlaced OnHeldObjectPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeldObjectDropped OnHeldObjectDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeldObjectThrown OnHeldObjectThrown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeldObjectThrownLanded OnHeldObjectThrownLanded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeldObjectDestroy OnHeldObjectDestroy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UsePreviewMaterial, meta=(AllowPrivateAccess=true))
    uint8 bUsePreviewMaterial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bCollisionBlockedByPawns, meta=(AllowPrivateAccess=true))
    uint8 bCollisionBlockedByPawns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDroppedFromWeaponSwap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EHeldObjectState HeldObjectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OwningPawn, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* OwningPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRotator ObjectPickupRotation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> PreviousOwningPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHeldObjectMovementReplicatedData HeldObjectMovementReplicatedData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortWorldItem> GrantedWeaponItem;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortWeapon> GrantedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectComponent* PhysicsObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FCollisionResponseRestoreState> CollisionResponseChannelRestoreMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* ReferenceMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortDecoPreview* PlacementPreviewActor;
    
public:
    UFortHeldObjectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TurnOnCollisionSettings();
    
    UFUNCTION(BlueprintCallable)
    void TurnOffCollisionSettings();
    
    UFUNCTION(BlueprintCallable)
    void ThrownObjectStopped(const FHitResult& ImpactResult);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ThrowHeldObject(const FVector& DetachLocation, const FRotator& ThrowDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshComponent(UMeshComponent* InMeshComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlaceHeldObject();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PickupHeldObject(AFortPlayerPawn* PlayerPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponUnequipped();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnThrowComplete();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UsePreviewMaterial();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningPawn(AFortPlayerPawn* LastOwningPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bCollisionBlockedByPawns();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnheld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDropped() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOwnerDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleOwnerAsBuildingActorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSweptTraceRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBlocksVehicleDriverSeat() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropHeldObject();
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract(const AFortPlayerPawn* RequestingPawn);
    
};

