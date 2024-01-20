#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "BASEGameplayEffect.h"
#include "BuildingProp.h"
#include "FortBaseWeaponStats.h"
#include "FortDamageSourceInterface.h"
#include "PatternBASEEffect.h"
#include "FortConstructorBASE.generated.h"

class AActor;
class ABuildingSMActor;
class AController;
class AFortPawn;
class UAbilitySystemComponent;
class UFortDamageSet;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortConstructorBASE : public ABuildingProp, public IFortDamageSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBASEGameplayEffect> BASEBuildingApplicationEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBASEGameplayEffect> BASEFriendlyApplicationEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBASEGameplayEffect> BASEFriendlyApplicationTrapEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBASEGameplayEffect> BASEEnemyApplicationEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InBASETag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodesToAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatternBASEEffect> BASEEffectPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBaseWeaponStats DamageStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageAttributeSet;
    
    AFortConstructorBASE();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void StopBuildingActorVisuals(ABuildingSMActor* BuildingActor, UStaticMeshComponent* EffectMeshComp);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void StartBuildingActorVisuals(ABuildingSMActor* BuildingActor, UStaticMeshComponent* EffectMeshComp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaced(UAbilitySystemComponent* InstigatorAbilitySystemComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnRemovedFromBase(AFortPawn* Pawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnAddedToBase(AFortPawn* Pawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNeighborEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnNeighborDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnBasePawnDied(AFortPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnBasePawnDestroyed(AFortPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnBaseCollisionUnTouched(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBaseCollisionTouched(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetResourceAmountsBasedOnUpgradeTier(int32 TierOneUpgradeAmount, int32 TierTwoUpgradeAmount, int32 TierThreeUpgradeAmount, int32& WoodResult, int32& StoneResult, int32& MetalResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<ABuildingSMActor*> GetBuildingActorsInBase();
    
private:
    UFUNCTION(BlueprintCallable)
    void AddNeighborToBaseOnFinishedConstruction(ABuildingSMActor* PlaceOn);
    
    
    // Fix for true pure virtual functions not being implemented
};

