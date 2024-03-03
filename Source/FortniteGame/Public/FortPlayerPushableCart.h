#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "BuildingGameplayActor.h"
#include "PlayerPushableCartOnTeamsRolesChangedDelegate.h"
#include "TeamRoles.h"
#include "FortPlayerPushableCart.generated.h"

class AActor;
class AFortAthenaMutator_Uranium;
class AFortPlayerPawn;
class UFortMovementComp_GroundSpline;
class UShapeComponent;
class USplineComponent;

UCLASS(Blueprintable)
class AFortPlayerPushableCart : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPushersOrDefendersChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerExitedPushArea, AFortPlayerPawn*, PlayerState, bool, bPlayerIsAPusher);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEnteredPushArea, AFortPlayerPawn*, PlayerState, bool, bPlayerIsAPusher);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckPointReached, int32, CheckPointIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCartPlayerPushableChanged, bool, bNewPlayerPushable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCartApproachingCheckPoint);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckPointReached OnCheckPointReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushersOrDefendersChanged OnPushersOrDefendersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCartPlayerPushableChanged OnCartPlayerPushableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredPushArea OnPlayerEnteredPushArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerExitedPushArea OnPlayerExitedPushArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCartApproachingCheckPoint OnCartApproachingCheckPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPushableCartOnTeamsRolesChanged PlayerPushableCartOnTeamsRolesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMovementComp_GroundSpline* MovementComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_Uranium> UraniumMutatorOwner;
    
    UPROPERTY(EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USplineComponent> SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> SplineCheckPointIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCheckpoint, meta=(AllowPrivateAccess=true))
    uint8 CurrentCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamRoles, meta=(AllowPrivateAccess=true))
    FTeamRoles TeamRoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TotalActivePushers, meta=(AllowPrivateAccess=true))
    uint8 TotalActivePushers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TotalActiveDefenders, meta=(AllowPrivateAccess=true))
    uint8 TotalActiveDefenders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPushable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BasePushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PushSpeedPercentPerPusher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Deceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat YawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsNearCheckpoint, meta=(AllowPrivateAccess=true))
    bool bIsNearCheckpoint;
    
public:
    AFortPlayerPushableCart();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetNearCheckpoint(bool bNear);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePlayerFromPushArea(AFortPlayerPawn* PlayerToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSplineSet();
    
    UFUNCTION(BlueprintCallable)
    void OnSplinePointReached(int32 SplinePointReached, bool bWasMovingForward);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TotalActivePushers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TotalActiveDefenders();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamRoles();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCheckpoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsNearCheckpoint();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsNearCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCartContested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTransformAtCheckPoint(FTransform& OutTransform, int32 CheckPointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalCheckPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTotalActivePushers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTotalActiveDefenders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSplineIndexForNextCheckPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSplineIndexForCurrentCheckPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineDistanceAtCheckPoint(int32 CheckPointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPushingStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetPusherTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UShapeComponent* GetPushAreaShapeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentProgressTowardsNextCheckPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetNextCheckPointIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetLastReachedCheckPointIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayerPushable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToNextCheckPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefenderTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCheckPointTransforms(TArray<FTransform>& OutTransforms) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCartDistanceAlongSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetCameraActor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddPlayerToPushArea(AFortPlayerPawn* PlayerToAdd);
    
};

