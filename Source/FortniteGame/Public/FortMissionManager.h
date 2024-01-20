#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EarnedBadgeEntryArray.h"
#include "FortMissionEventName.h"
#include "FortMissionEventReceiverByGameplayTagQuery.h"
#include "FortMissionUIActorHandle.h"
#include "OnMissionsUpdatedDelegate.h"
#include "OnShowSecondaryMissionHeadersChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortMissionManager.generated.h"

class AFortAIPawn;
class AFortBluGloManager;
class AFortMission;
class UGameplayEffect;
class UObject;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API AFortMissionManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionEventName> MissionEventNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> PrimaryMissionGE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortBluGloManager* BluGloManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Missions, meta=(AllowPrivateAccess=true))
    TArray<AFortMission*> Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AllMissionEnemyClasses, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFortAIPawn>> AllMissionEnemyClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionEventReceiverByGameplayTagQuery> ContainerSearchedMissionReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionEventReceiverByGameplayTagQuery> HarvestedMissionReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionUIActors, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionUIActorHandle> MissionUIActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentUIFocusedMission, meta=(AllowPrivateAccess=true))
    AFortMission* CurrentUIFocusedMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortMission* MissionClosestToPar;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionsUpdated OnMissionsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EarnedBadgesArray, meta=(AllowPrivateAccess=true))
    FEarnedBadgeEntryArray EarnedBadgesArray;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowSecondaryMissionHeadersChanged OnShouldShowSecondaryMissionHeadersChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisplaySecondaryMissionHeaders;
    
    AFortMissionManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowSecondaryMissionHeaders() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionUIActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Missions();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EarnedBadgesArray();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentUIFocusedMission();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AllMissionEnemyClasses();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery(UObject* WorldContextObject, const FGameplayTagQuery& TagQuery, TArray<AActor*>& SpawnLocationActors);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSpawnLocationActorsMatchingEntryItemQuery(UObject* WorldContextObject, const FGameplayTagQuery& TagQuery, TArray<AActor*>& SpawnLocationActors);
    
};

