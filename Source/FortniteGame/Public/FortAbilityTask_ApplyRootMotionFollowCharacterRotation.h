#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "ApplyRootMotionFallingBoostForceDelegateDelegate.h"
#include "ApplyRootMotionFollowCharacterRotationDelegateDelegate.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "FortAbilityTask_ApplyRootMotionFollowCharacterRotation.generated.h"

class UCurveFloat;
class UFortAbilityTask_ApplyRootMotionFollowCharacterRotation;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortAbilityTask_ApplyRootMotionFollowCharacterRotation : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionFollowCharacterRotationDelegate OnFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnableGravity;
    
public:
    UFortAbilityTask_ApplyRootMotionFollowCharacterRotation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_ApplyRootMotionFollowCharacterRotation* ApplyRootMotionFollowCharacterRotation(UGameplayAbility* OwningAbility, FName TaskInstanceName, float StrengthInWater, float NewDuration, bool NewBIsAdditive, UCurveFloat* StrengthOverTimeOnLand, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity);
    
};

