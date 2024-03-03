#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "EFortHomingStyle.h"
#include "FortReplicatedVelocityData.h"
#include "FortStopSimulatingRepData.h"
#include "ProjectileHomingData.h"
#include "FortProjectileMovementComponent.generated.h"

class AActor;
class AFortPawn;
class UFortWaterInteractionComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileVelocityReplicated, const FVector&, ReplicatedVelocity);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HomingData, meta=(AllowPrivateAccess=true))
    FProjectileHomingData HomingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHomingStyle InitialHomingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasHomedTowardTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSetInitialLocAndDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedAutoRegisterUpdatedComponent, meta=(AllowPrivateAccess=true))
    uint8 bReplicatedAutoRegisterUpdatedComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicateStopSimulating: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingLaserTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingTravelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingOverrideSpeed;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPawn> LockedOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector DesiredDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PreviousHomingTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LaunchPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InitialDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AccelerationMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedVelocity, meta=(AllowPrivateAccess=true))
    FFortReplicatedVelocityData ReplicatedVelocityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FortStopSimulatingRepData, meta=(AllowPrivateAccess=true))
    FFortStopSimulatingRepData FortStopSimulatingRepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortWaterInteractionComponent* WaterInteractionComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileVelocityReplicated OnProjectileVelocityReplicated;
    
    UFortProjectileMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetWaterInteractionComponent(UFortWaterInteractionComponent* WaterComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetVelocity(const FVector& InReplicatedVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatedAutoRegisterUpdatedComponent(const bool bInReplicatedAutoRegisterUpdatedComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingTurnSpeedMin(float NewHomingTurnSpeedMin);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingTurnSpeedMax(float NewHomingTurnSpeedMax);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingTimeUntilMaxTurnSpeed(float NewTimeUntilMax);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingTargetPosition(const FVector& HomingTargetPosition);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingTargetOffset(const FVector& NewHomingOffset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingTarget(AActor* HomingTarget);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingStyle(EFortHomingStyle NewHomingStyle, bool ResetHomingTurnSpeedTimer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingLockTargetDistanceThreshold(float NewDistanceThreshold);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingLaserTargetDistance(float NewDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomingData(const FProjectileHomingData& NewHomingData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDesiredDirection(const FVector& Direction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAccelerationMagnitude(const float InAccelerationMagnitude);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedVelocity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAutoRegisterUpdatedComponent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HomingData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FortStopSimulatingRepData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortHomingStyle GetInitalHomingStyle() const;
    
};

