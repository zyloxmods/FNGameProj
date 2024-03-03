#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/MovementComponent.h"
#include "GameplayTagContainer.h"
#include "GroundSplineLocationData.h"
#include "GroundSplineSpeedData.h"
#include "OnCrossedSplinePointDelegate.h"
#include "OnEndOfSplineReachedDelegate.h"
#include "OnHitActorDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortMovementComp_GroundSpline.generated.h"

class UAbilitySystemComponent;
class UGameplayEffect;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortMovementComp_GroundSpline : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLocationOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOffsetZIsAbsolute: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bTickGroundSplineMovement: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitActor OnHitActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndOfSplineReached OnEndOfSplineReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrossedSplinePoint OnCrossedSplinePoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfMoveRetriesPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchThresholdSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearJerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawJerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCheckFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttemptUnstickMinimumAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnPushTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientImmediatelySnapToReplicatedLocationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientImmediatelySnapToReplicatedLocationDistanceMinimumSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnPushForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectClassDestroyBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagDestroyBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineDistanceReplicationRecoveryPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineDistanceReplicationRecoveryMinDistancePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedTimeReplicationRecoveryPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedSplineLocationData, meta=(AllowPrivateAccess=true))
    FGroundSplineLocationData ReplicatedSplineLocationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedTargetSpeeds, meta=(AllowPrivateAccess=true))
    FGroundSplineSpeedData ReplicatedTargetSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UFortMovementComp_GroundSpline();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TeleportToDistanceOnSpline(USplineComponent* NewTravelSpline, float Distance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetSpeeds(const FGroundSplineSpeedData& NewTargetSpeeds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSpline(USplineComponent* NewTravelSpline, float NewDistanceOnSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilitySystemComponent(UAbilitySystemComponent* NewAbilitySystemComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedTargetSpeeds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSplineLocationData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetTransformAtDistanceOnSpline(FTransform& OutTransform, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGroundSplineSpeedData GetTargetSpeeds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGroundSplineSpeedData GetCurrentSpeeds() const;
    
    UFUNCTION(BlueprintCallable)
    void ClientOnlySnapToServerLocationAndSpeed();
    
};

