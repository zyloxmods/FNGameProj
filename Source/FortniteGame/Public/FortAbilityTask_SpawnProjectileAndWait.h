#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "FortGameplayEffectContainerSpec.h"
#include "SpawnProjectileEventDataDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortAbilityTask_SpawnProjectileAndWait.generated.h"

class AActor;
class AFortProjectileBase;
class UFortAbilityTask_SpawnProjectileAndWait;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortAbilityTask_SpawnProjectileAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnProjectileEventData Created;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnProjectileEventData Touched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnProjectileEventData Bounced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnProjectileEventData Stopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnProjectileEventData Exploded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnProjectileEventData Destroyed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortProjectileBase> SpawnedProj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RequestedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HomingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSpawnWhenDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSpawnWhenDBNO;
    
    UFortAbilityTask_SpawnProjectileAndWait();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_SpawnProjectileAndWait* SpawnProjectileAndWait(UGameplayAbility* OwningAbility, TSubclassOf<AFortProjectileBase> Class, AActor* NewRequestedBy, const FVector& NewSpawnLocation, const FRotator& NewSpawnRotation, const FRotator& NewSpawnDirection, float NewInitialSpeed, FFortGameplayEffectContainerSpec NewEffectContainerSpecToApplyOnHit, FFortGameplayEffectContainerSpec NewEffectContainerSpecToApplyOnExplode, float NewGravityScale, AActor* NewHomingTarget, bool bAllowProjectileSpawnWhenDead, bool bAllowProjectileSpawnWhenDBNO);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UGameplayAbility* OwningAbility, AFortProjectileBase* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AFortProjectileBase> Class, AFortProjectileBase*& SpawnedActor);
    
};

