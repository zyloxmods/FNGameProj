#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortAdvancedMovementSet.generated.h"

UCLASS(Blueprintable)
class UFortAdvancedMovementSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GroundFriction, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData GroundFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrakingDecelerationWalking, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BrakingDecelerationWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrakingDecelerationFalling, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BrakingDecelerationFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrakingDecelerationFlying, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BrakingDecelerationFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxAcceleration, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxAccelerationFlying, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxAccelerationFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrakingFrictionFactor, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BrakingFrictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JumpZVelocity, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData JumpZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData JumpHorizontalAccelerationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData JumpHorizontalVelocityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MinAnalogWalkSpeed, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MinAnalogWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData AirControlMultiplier;
    
public:
    UFortAdvancedMovementSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MinAnalogWalkSpeed(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxAccelerationFlying(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxAcceleration(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_JumpZVelocity(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GroundFriction(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingFrictionFactor(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingDecelerationWalking(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingDecelerationFlying(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingDecelerationFalling(const FFortGameplayAttributeData& OldValue);
    
};

