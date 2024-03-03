#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HookGunRopeRepData.h"
#include "OnEndReelDelegate.h"
#include "FortHookGunRope.generated.h"

class AFortProjectileBase;
class AFortWeapon;
class USkeletalMeshComponentBudgeted;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortHookGunRope : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RopeProjectileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponMeshSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* OwningProjectileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwningProjectileMeshSocketName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndReel OnEndReel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectileGone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HookGunRopeRepData, meta=(AllowPrivateAccess=true))
    FHookGunRopeRepData HookGunRopeRepData;
    
public:
    AFortHookGunRope();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetWeaponMesh(USkeletalMeshComponentBudgeted* NewValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetWeaponAndProjectile(AFortWeapon* InWeapon, AFortProjectileBase* InProjectile);
    
    UFUNCTION(BlueprintCallable)
    void SetStartPointOfRope();
    
    UFUNCTION(BlueprintCallable)
    void SetOwningProjectileMesh(UStaticMeshComponent* NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HookGunRopeRepData();
    
};

