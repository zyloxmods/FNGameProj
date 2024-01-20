#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "EFortHomingStyle.h"
#include "ProjectileHomingData.h"
#include "FortProjectileMovementComponent.generated.h"

class AActor;
class AFortPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HomingData, meta=(AllowPrivateAccess=true))
    FProjectileHomingData HomingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHomingStyle InitialHomingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingLaserTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasHomedTowardTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingTravelTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPawn> LockedOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector DesiredDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AccelerationMagnitude;
    
public:
    UFortProjectileMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    void SetDesiredDirection(const FVector& Direction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAccelerationMagnitude(const float InAccelerationMagnitude);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HomingData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortHomingStyle GetInitalHomingStyle() const;
    
};

