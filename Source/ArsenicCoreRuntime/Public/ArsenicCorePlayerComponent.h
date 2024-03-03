#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "GameplayTagContainer.h"
#include "ArsenicCoreSquadMemberPlayerStatus.h"
#include "ArsenicOnGhostScreamFoundNoSurvivorsDelegate.h"
#include "ArsenicOnGhostVisibilityChangeDelegate.h"
#include "ArsenicOnLocalGhostPlayerEnteredOrExitedVehicleDelegate.h"
#include "ArsenicOnPlayerStatusChangeDelegate.h"
#include "EArsenicCorePlayerStatus.h"
#include "ArsenicCorePlayerComponent.generated.h"

class AArsenicCoreRespawnDrone;
class AFortAthenaMutator_ArsenicCore;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UArsenicCorePlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArsenicOnGhostVisibilityChange OnGhostVisibilityChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArsenicOnGhostScreamFoundNoSurvivors OnGhostScreamFoundNoSurvivors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArsenicOnLocalGhostPlayerEnteredOrExitedVehicle OnLocalGhostPlayerEnteredOrExitedVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArsenicOnPlayerStatusChange ArsenicOnPlayerStatusChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArsenicOnPlayerStatusChange ArsenicOnPlayerSquadMemberStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ManagingMutator, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_ArsenicCore* ManagingMutator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HideWhileLoadingGameplayTagContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AArsenicCoreRespawnDrone* LocalRespawnDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPlayerStatus, meta=(AllowPrivateAccess=true))
    EArsenicCorePlayerStatus CurrentPlayerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ScreamFoundNoSurvivors, meta=(AllowPrivateAccess=true))
    uint8 ScreamFoundNoSurvivors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SquadMemberPlayerStatuses, meta=(AllowPrivateAccess=true))
    TArray<FArsenicCoreSquadMemberPlayerStatus> SquadMemberPlayerStatuses;
    
public:
    UArsenicCorePlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateGhostVisibilityChange(const bool bIsVisibile);
    
    UFUNCTION(BlueprintCallable)
    void SetSquadMemberArsenicCorePlayerStatus(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus NewPlayerStatus);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClientIsReadyToSpawnAsGhost();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadMemberPlayerStatuses(const TArray<FArsenicCoreSquadMemberPlayerStatus>& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ScreamFoundNoSurvivors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ManagingMutator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPlayerStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    void GhostScreamFoundNoSurvivors();
    
};

