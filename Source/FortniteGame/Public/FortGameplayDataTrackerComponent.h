#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameFrameworkComponent.h"
#include "FortGameplayDataTrackedRange.h"
#include "FortGameplayDataTrackerAccumulation.h"
#include "FortGameplayDataTrackerActorStateGroupConfig.h"
#include "FortGameplayDataTrackerChangedHasAnyEventValueDelegate.h"
#include "FortGameplayDataTrackerEventConfiguration.h"
#include "FortGameplayDataTrackerEventValue.h"
#include "FortTrackedGameplayDataRangeChangedDelegate.h"
#include "FortGameplayDataTrackerComponent.generated.h"

class AFortGameStateAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameplayDataTrackerComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReplicateEvents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayDataTrackerChangedHasAnyEventValue OnChangedHasAnyEventValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TrackerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFirstPlayerControllerViewTargetAsAvatarActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerEventConfiguration> EventsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerActorStateGroupConfig> ActorStateGroupsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerAccumulation> AccumulationsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerEventConfiguration> FullEventsToTrackList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EventValues, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerEventValue> ReplicatedEventValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerEventValue> EventValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerAccumulation> DataAccumulations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerAccumulation> PendingDataAccumulationRegistrations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VislogFrequencySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastVislogTime;
    
public:
    UFortGameplayDataTrackerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TriggerEvent(const FGameplayTag& EventTag, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterForEventValueRange(const FGameplayTag& Event, FFortGameplayDataTrackedRange Range, FFortTrackedGameplayDataRangeChanged Delegate);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterForAccumulationRangeEvents(const FGameplayTag& AccumulationTag, const FGameplayTag& RangeTag, FFortTrackedGameplayDataRangeChanged Delegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EventValues();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventValue(const FGameplayTag& EventTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccumulationValue(const FGameplayTag& AccumulationTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddDataAccumulation(FFortGameplayDataTrackerAccumulation Accumulation);
    
};

