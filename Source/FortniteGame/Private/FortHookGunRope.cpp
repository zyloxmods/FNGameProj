#include "FortHookGunRope.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AFortHookGunRope::SetWeaponMesh(USkeletalMeshComponentBudgeted* NewValue) {
}

void AFortHookGunRope::SetWeaponAndProjectile(AFortWeapon* InWeapon, AFortProjectileBase* InProjectile) {
}

void AFortHookGunRope::SetStartPointOfRope() {
}

void AFortHookGunRope::SetOwningProjectileMesh(UStaticMeshComponent* NewValue) {
}

void AFortHookGunRope::OnRep_HookGunRopeRepData() {
}

void AFortHookGunRope::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortHookGunRope, HookGunRopeRepData);
}

AFortHookGunRope::AFortHookGunRope() {
    RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    RopeProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeProjectileMesh"));
    WeaponMesh = NULL;
    OwningProjectileMesh = NULL;
    bProjectileGone = false;
}

