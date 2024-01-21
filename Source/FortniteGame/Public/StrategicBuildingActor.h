#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActor.h"
#include "EFortStrategicBuildingCategory.h"
#include "FortAbilitySetHandle.h"
#include "StrategicBuildingActiveConstructionInfo.h"
#include "StrategicBuildingLevelActiveCriteriaProgress.h"
#include "StrategicBuildingLevelInformation.h"
#include "TeamStrategicBuildingHandle.h"
#include "Templates/SubclassOf.h"
#include "StrategicBuildingActor.generated.h"

class AActor;
class AFortPlayerController;
class UBoxComponent;
class UFortAbilitySet;
class UFortGadgetItemDefinition;
class UFortGameplayAbility;
class UFortVisibilityComponent;
class UFortWorldItemDefinition;
class UParticleSystem;
class USoundBase;
class UTexture2D;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AStrategicBuildingActor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarVisibilityDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthBarVisibilityDistanceSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TouchBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortStrategicBuildingCategory StrategicBuildingCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySet*> PermanentInherentAbilitySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FStrategicBuildingLevelInformation> LevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProximityPulseInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> DeathPenaltyAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGadgetItemDefinition* SpawnedFromItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTeamStrategicBuildingHandle SBAHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ConstructionProgress, meta=(AllowPrivateAccess=true))
    FStrategicBuildingActiveConstructionInfo ConstructionProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStrategicBuildingLevelActiveCriteriaProgress> LevelProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> StrategicBuildingAbilitySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> PersistentlyAppliedAbilitySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DeferredTouchActorsToProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsActive, meta=(AllowPrivateAccess=true))
    uint8 bIsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasGEsToApplyOnTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasGEsToApplyOnPulseTimer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVisibilityComponent* VisibilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MiniMapIcon;
    
public:
    AStrategicBuildingActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupVisibilityComponent();
    
    UFUNCTION(BlueprintCallable)
    void SetupIndicators();
    
    UFUNCTION(BlueprintCallable)
    void ProcessDeferredTouchActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConstructionProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnConstructionTickPlayEffects(float DeltaTime, float ElapsedPct, int32 ConstructionLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnConstructionStartedPlayEffects(float ServerStartTime, float ServerEndTime, float CurrentServerTime, float ElapsedPct, int32 ConstructionLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnConstructionEndedPlayEffects(int32 ConstructionLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActiveStatusChanged(bool bNewActiveStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GiveItemFromStrategicBuildingToPlayer(AFortPlayerController* PlayerController, const UFortWorldItemDefinition* ItemDefinition, int32 NumberToGive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxLevelUnlockProgress(int32 InLevel) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetDeathEffectsScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FRotator GetDeathEffectsRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetDeathEffectsLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLevelUnlockProgress(int32 InLevel) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AttemptIncrementLevelUnlockProgress(int32 InLevel, float InProgressDelta);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyProximityPulseEffects();
    
};

