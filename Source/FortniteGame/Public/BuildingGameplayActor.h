#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BuildingActor.h"
#include "BuildingGameplayActorAbilityDeliveryInfo.h"
#include "EFortAbilityTargetingSource.h"
#include "FortAnalyticsInterface.h"
#include "FortDamageSourceInterface.h"
#include "FortProjectileMovementInterface.h"
#include "FortTargetSelectionInterface.h"
#include "OnDeliverableAbilityInfoAppliedToTouchingActorDelegate.h"
#include "OnDeliverableAbilityInfoChangedForExitingTouchActorDelegate.h"
#include "OnProximityEffectsAppliedDelegate.h"
#include "OnProximityPrePulseDelegate.h"
#include "OnProximityPulseDelegate.h"
#include "BuildingGameplayActor.generated.h"

class AActor;
class AFortPlayerController;
class UFortAbilitySet;
class UFortDamageSet;
class UFortGameplayAbility;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingGameplayActor : public ABuildingActor, public IFortTargetSelectionInterface, public IFortDamageSourceInterface, public IFortProjectileMovementInterface, public IFortAnalyticsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* AbilitySet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* InherentAbilitySets[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRidingOnActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProximityPulse OnProximityPulseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProximityPrePulse OnProximityPrePulseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProximityEffectsApplied OnProximityEffectsAppliedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeliverableAbilityInfoAppliedToTouchingActor OnDeliverableAbilityInfoAppliedToTouchingActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeliverableAbilityInfoChangedForExitingTouchActor OnDeliverableAbilityInfoChangedForExitingTouchActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInstigatorCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddOwnerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbilitySourceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingGameplayActorAbilityDeliveryInfo DeliverableAbilityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyDefaultEnabledAbilityBucketsOnInit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSimpleActorTouchSetupForAbilityBuckets: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowInteractKeybind: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RegisteredTouchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnalyticsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostProcessOverlapBlendWeight;
    
public:
    ABuildingGameplayActor();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTouchComponentForAbilityDeliveryInfo(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialVelocity(const FVector& InitialVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInstigatorCollision(bool bShouldIgnore);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAbilitySourceLevel(int32 NewAbilitySourceLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplicatedVelocityStartOrStop(bool bStart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRegisteredTouchComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRegisteredTouchComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDropped(bool bValidLocation, bool bPassesPlacementRestrictions, bool bWasIntentionallyPlaced);
    
    UFUNCTION(BlueprintCallable)
    void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);
    
    UFUNCTION(BlueprintCallable)
    void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetTargetingSourceTransform(EFortAbilityTargetingSource Source) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceChangeOwnerInstigator(AFortPlayerController* NewInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableAbilityDeliveryInfo(FGameplayTag BucketTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableAbilityDeliveryInfo(FGameplayTag BucketTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AcceptsEmoteSprays() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FTransform GetTargetingTransform(EFortAbilityTargetingSource Source, UFortGameplayAbility* SourceAbility) const override PURE_VIRTUAL(GetTargetingTransform, return FTransform{};);
    
};

