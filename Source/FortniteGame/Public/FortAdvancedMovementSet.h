#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortAdvancedMovementSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortAdvancedMovementSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
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
    
    UFortAdvancedMovementSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MinAnalogWalkSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxAccelerationFlying();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxAcceleration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_JumpZVelocity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GroundFriction();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingFrictionFactor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingDecelerationWalking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingDecelerationFlying();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingDecelerationFalling();
    
};

