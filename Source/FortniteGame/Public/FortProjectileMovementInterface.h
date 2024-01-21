#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EFortHomingStyle.h"
#include "FortProjectileMovementInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortProjectileMovementInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortProjectileMovementInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTurnSpeedMin(float NewTurnSpeedMin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTurnSpeedMax(float NewTurnSpeedMin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTimeUntilMaxTurnSpeed(float NewTimeUntilMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTargetPosition(const FVector& HomingTargetPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTargetOffset(const FVector& NewHomingOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTarget(AActor* HomingTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingStyle(EFortHomingStyle NewHomingStyle, bool ResetHomingTurnSpeedTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingLockTargetDistanceThreshold(float NewDistanceThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingLaserTargetDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDesiredDirection(const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAccelerationMagnitude(const float InAccelerationMagnitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedLockTargetDistanceThreshold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHomingPassedTarget();
    
};

