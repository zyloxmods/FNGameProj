#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFrameworkComponent.h"
#include "OnComponentHitSignatureDelegate.h"
#include "OnPhysicsObjectAwakeChangedDelegate.h"
#include "FortPhysicsObjectComponent.generated.h"

class AActor;
class AController;
class UBuoyancyComponent;
class UFortPhysicsObjectPreset;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPhysicsObjectComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhysicsObjectAwakeChanged OnAwakeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComponentHitSignature OnReceivedLargeImpulse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectPreset* PhysicsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInitializeUsingRootComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SimulatingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuoyancyComponent* BuoyancyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularVelocity;
    
public:
    UFortPhysicsObjectComponent();
    UFUNCTION(BlueprintCallable)
    void WakeUp();
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatePhysics(bool bSimulate);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsPreset(const UFortPhysicsObjectPreset* InPhysicsPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void PutToSleep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwake() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializePhysics(UPrimitiveComponent* PrimitiveComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSimulatingComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void HandleSimulatingComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void HandleSimulatingComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleSimulatingComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetSimulatingComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientBroadcastHitDetection(AController* EventInstigator, float Radius, float Relevancy, const FVector HalfPoints, const FVector DoublePoints);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastAngularVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
};

