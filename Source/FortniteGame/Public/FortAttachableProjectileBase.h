#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AttachedInfo.h"
#include "FortProjectileBase.h"
#include "FortAttachableProjectileBase.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFortAttachableProjectileBase : public AFortProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedAttachedInfo, meta=(AllowPrivateAccess=true))
    FAttachedInfo AttachedInfo;
    
    AFortAttachableProjectileBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ServerAttachToActor(const FHitResult& Hit, AActor* AttachToActor, float StickyOffsetFromPhysicsMesh, float StickyOffsetFromBoneCenter, float NarrowPlacementAgainstVelocityThreshold);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAttachedInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalizeAttachmentSocketLocandRot(FVector InWorldPos, FRotator InWorldRot, FName InSocketName, bool bFoundClosestOnPhysicsAsset, FVector& OutWorldPos, FRotator& OutWorldRot, FName OutSocketName);
    
protected:
   // UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
   // void OnAttachedToEndPlayed(AActor* DamagedActor, TEnumAsByte<EEndPlayReason> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachedToDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetAttachedToActor();
    
};

