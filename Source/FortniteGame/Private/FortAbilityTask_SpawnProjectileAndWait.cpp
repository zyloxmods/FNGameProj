#include "FortAbilityTask_SpawnProjectileAndWait.h"
#include "Templates/SubclassOf.h"

UFortAbilityTask_SpawnProjectileAndWait* UFortAbilityTask_SpawnProjectileAndWait::SpawnProjectileAndWait(UGameplayAbility* OwningAbility, TSubclassOf<AFortProjectileBase> Class, AActor* NewRequestedBy, const FVector& NewSpawnLocation, const FRotator& NewSpawnRotation, const FRotator& NewSpawnDirection, float NewInitialSpeed, FFortGameplayEffectContainerSpec NewEffectContainerSpecToApplyOnHit, FFortGameplayEffectContainerSpec NewEffectContainerSpecToApplyOnExplode, float NewGravityScale, AActor* NewHomingTarget, bool bAllowProjectileSpawnWhenDead, bool bAllowProjectileSpawnWhenDBNO) {
    return NULL;
}

void UFortAbilityTask_SpawnProjectileAndWait::OnProjectileDestroyed(AActor* DestroyedActor) {
}

void UFortAbilityTask_SpawnProjectileAndWait::FinishSpawningActor(UGameplayAbility* OwningAbility, AFortProjectileBase* SpawnedActor) {
}

bool UFortAbilityTask_SpawnProjectileAndWait::BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AFortProjectileBase> Class, AFortProjectileBase*& SpawnedActor) {
    return false;
}

UFortAbilityTask_SpawnProjectileAndWait::UFortAbilityTask_SpawnProjectileAndWait() {
    RequestedBy = NULL;
    InitialSpeed = 1;
    GravityScale = 1;
    HomingTarget = NULL;
    bAllowSpawnWhenDead = false;
    bAllowSpawnWhenDBNO = false;
}

