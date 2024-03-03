#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "BuildingTurretTargetChangedDelegate.h"
#include "BuildingTurretComponent.generated.h"

class AActor;
class UAbilitySystemComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBuildingTurretComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingTurretTargetChanged OnTurretTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OnFireTagTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiringInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTargetValidationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformPeriodicValidationOnCurrentTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TargetingOverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OwnerASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentTarget, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    UBuildingTurretComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetingOverlapComponent(UPrimitiveComponent* NewTargetingOverlapComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetingEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetingBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTarget(AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnPerformTargetValidation();
    
    UFUNCTION(BlueprintCallable)
    void OnFiringTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValidTarget(AActor* InTarget) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* ChooseBestTarget(UPARAM(Ref) TArray<AActor*>& InOutPotentialTargets) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AttemptSetCurrentTarget(AActor* NewTarget);
    
};

