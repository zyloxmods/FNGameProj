#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BuildingInfoIndicatorInterface.h"
#include "BuildingSMActor.h"
#include "EFortAbilityTargetingSource.h"
#include "FortAbilitySetHandle.h"
#include "FortCosmeticModification.h"
#include "FortDamageSourceInterface.h"
#include "FortTargetFilter.h"
#include "FortTargetSelectionInterface.h"
#include "BuildingTrap.generated.h"

class AActor;
class AController;
class UAthenaTrapAIPerceptionStimuliSourceComponent;
class UFortAbilitySet;
class UFortAlterationItemDefinition;
class UFortDamageSet;
class UFortGameplayAbility;
class UFortTrapItemDefinition;
class UMaterialInstance;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMesh;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class ABuildingTrap : public ABuildingSMActor, public IAISightTargetInterface, public IFortTargetSelectionInterface, public IFortDamageSourceInterface, public IBuildingInfoIndicatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TraceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PlacementSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlacementSkeletalMeshRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PlacementSkeletalMeshRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TrapRangeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TrapPreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviewOverrideScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    UFortTrapItemDefinition* TrapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AttachmentHintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAffectAllPawnsInMinigames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTargetFilter TriggerFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TrapPlacementOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerAbilityOnEndoverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* AbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageAttributeSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ReplicatedAppliedAlterations, meta=(AllowPrivateAccess=true))
    TArray<UFortAlterationItemDefinition*> AppliedAlterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> AlterationAbilitySetHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_AttachedTo, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* AttachedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetWithAttachedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* LastAttachedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeDestroyAfterDurabilityExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SavedDurabilityPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstructedTargetRecheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ShouldTriggerTraceOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> TriggerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBuildingObstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOwnAllFacesOfAttachedToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* AlternateMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaTrapAIPerceptionStimuliSourceComponent* StimSourceComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> DamageComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TrapLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OriginalTrapLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnalyticsTags;
    
public:
    ABuildingTrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool UseAttachedToWhenTargeted();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TriggerIfAppropriate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void SwitchToAlternateMaterial();
    
    UFUNCTION(BlueprintCallable)
    void SpawnedFromItemDefinition(const UFortTrapItemDefinition* ItemDef, int32 InTrapLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTeamForMinigameStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAttachedTo(ABuildingSMActor* ActorAttachedTo);
    
    UFUNCTION(BlueprintCallable)
    void ResetTrapLevel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetTeamOnMinigameEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTriggerTouch(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndTouch(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAppliedAlterations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedTo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnReloadEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnReloadBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOutOfDurability();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModifyTrapIncomingDamage(float Damage, AController* EventInstigator, AActor* DamageCauser, float& OutDamage, bool& bOutConsumeEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitAlteration(UFortAlterationItemDefinition* NewAlteration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedBuilding();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDestroy();
    
    UFUNCTION(BlueprintCallable)
    void OnBlockingBuildingDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrapRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrapLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetTouchingDamageTargets(const FFortTargetFilter& Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTime();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetReloadBeginGameplayCueTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumberOfRemainingDelayedAttachingAttempts() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFireDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityPercent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDelayBeginGameplayCueTag() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABuildingSMActor* GetBuildingAttachedTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortAlterationItemDefinition*> GetAlterations() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActivateTrapGameplayCueTag() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Abilities_Activation_Traps(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void FinishTrigger();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_ShouldTrigger(const TArray<AActor*>& TouchingActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTrigger(const TArray<AActor*>& TouchingActors, bool& bOutConsumeEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void AttemptRetrigger(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void AddTriggerComponent(UPrimitiveComponent* TriggerComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddDamageComponent(UPrimitiveComponent* DamageComponent);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FTransform GetTargetingTransform(EFortAbilityTargetingSource Source, UFortGameplayAbility* SourceAbility) const override PURE_VIRTUAL(GetTargetingTransform, return FTransform{};);
    
};

