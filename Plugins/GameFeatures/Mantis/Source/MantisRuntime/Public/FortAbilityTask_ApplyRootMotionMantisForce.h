#pragma once
#include "CoreMinimal.h"
#include "ApplyRootMotionFallingBoostForceDelegateDelegate.h"
#include "ApplyRootMotionMantisForceDelegateDelegate.h"
#include "FortAbilityTask_ApplyRootMotionMantisForce.generated.h"

class UAnimMontage;
class UFortAbilityTask_ApplyRootMotionMantisForce;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortAbilityTask_ApplyRootMotionMantisForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionMantisForceDelegate OnFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* TechniqueMontage;
    
public:
    UFortAbilityTask_ApplyRootMotionMantisForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_ApplyRootMotionMantisForce* ApplyRootMotionMantisForce(UGameplayAbility* OwningAbility, float NewDuration, UAnimMontage* NewTechniqueMontage);
    
};

