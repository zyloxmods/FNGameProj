#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ApplyRootMotionFallingBoostForceDelegateDelegate.h"
#include "ApplyRootMotionFallingBoostForceDelegateDelegate.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "FortAbilityTask_ApplyRootMotionFallingBoostForce.generated.h"

class UFortAbilityTask_ApplyRootMotionFallingBoostForce;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortAbilityTask_ApplyRootMotionFallingBoostForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionFallingBoostForceDelegate OnFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float VerticalImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float GravityScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LateralFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxLateralSpeed;
    
public:
    UFortAbilityTask_ApplyRootMotionFallingBoostForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnLandedCallback(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_ApplyRootMotionFallingBoostForce* ApplyRootMotionFallingBoostForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewVerticalImpulse, float NewDuration, float NewGravityScalar, float NewMaxAcceleration, float NewLateralFriction, float NewMaxLateralSpeed);
    
};

