#pragma once
#include "CoreMinimal.h"
#include "FortWeaponItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortWeaponRangedItemDefinition.generated.h"

class AFortProjectileBase;
class UParticleSystem;

UCLASS(Blueprintable, MinimalAPI)
class UFortWeaponRangedItemDefinition : public UFortWeaponItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortProjectileBase> ProjectileTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> BulletShellFXTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNativeWeaponTrace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTraceThroughPawns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTraceThroughWorld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldSpawnBulletShellFX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldUsePerfectAimWhenTargetingMinSpread: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoNotAllowDoublePump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseOnTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowADSInAir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowReticleHitNotifyAtImpactLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceProjectileTooltip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSecondaryFireRequiresAmmo: 1;
    
public:
    UFortWeaponRangedItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseOnTouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUsePerfectAimWhenTargetingMinSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseNativeWeaponTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldTraceThroughWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldTraceThroughPawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSpawnBulletShellFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowReticleHitNotifyAtImpactLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortProjectileBase> GetProjectileTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetBulletShellFXTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ForceProjectileTooltip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoNotAllowDoublePump() const;
    
};

