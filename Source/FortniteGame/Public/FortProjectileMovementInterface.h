#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EFortHomingStyle.h"
#include "ProjectileHomingData.h"
#include "FortProjectileMovementInterface.generated.h"

class AActor;
class AFortPlayerController;
class UFortProjectileMovementComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UFortProjectileMovementInterface : public UInterface {
    GENERATED_BODY()
};

class IFortProjectileMovementInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTurnSpeedMin(AActor* SelfActor, float NewTurnSpeedMin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTurnSpeedMax(AActor* SelfActor, float NewTurnSpeedMin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTimeUntilMaxTurnSpeed(AActor* SelfActor, float NewTimeUntilMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTargetPosition(AActor* SelfActor, const FVector& HomingTargetPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTargetOffset(AActor* SelfActor, const FVector& NewHomingOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingTarget(AActor* SelfActor, AActor* HomingTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingStyle(AActor* SelfActor, EFortHomingStyle NewHomingStyle, bool ResetHomingTurnSpeedTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingLockTargetDistanceThreshold(AActor* SelfActor, float NewDistanceThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingLaserTargetDistance(AActor* SelfActor, float NewDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomingData(AActor* SelfActor, const FProjectileHomingData& NewHomingData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDesiredDirection(AActor* SelfActor, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAccelerationMagnitude(AActor* SelfActor, const float InAccelerationMagnitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedLockTargetDistanceThreshold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHomingPassedTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsProjectileBeingKilled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AFortPlayerController* GetInstigatorPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UFortProjectileMovementComponent* GetFortProjectileMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCurrentLocation() const;
    
};

