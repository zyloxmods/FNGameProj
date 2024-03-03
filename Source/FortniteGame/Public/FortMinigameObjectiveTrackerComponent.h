#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETrackedObjectiveQuery.h"
#include "MinigameTrackedObjectiveUpdatedDelegate.h"
#include "TrackedObjective.h"
#include "TrackedObjectiveArray.h"
#include "FortMinigameObjectiveTrackerComponent.generated.h"

class UFortMinigameObjectiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMinigameObjectiveTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameTrackedObjectiveUpdated OnTrackedObjectiveAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameTrackedObjectiveUpdated OnTrackedObjectiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameTrackedObjectiveUpdated OnTrackedObjectiveRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameTrackedObjectiveUpdated OnTrackedObjectiveStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameTrackedObjectiveUpdated OnTrackedObjectiveAllowedInteractionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameTrackedObjectiveUpdated OnTrackedObjectiveTeamUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTrackedObjectiveArray ObjectiveArray;
    
public:
    UFortMinigameObjectiveTrackerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTrackedProgress(UFortMinigameObjectiveComponent* Objective);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopTrackingObjective(UFortMinigameObjectiveComponent* Objective, bool bPurgeHistory);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 StartTrackingObjective(UFortMinigameObjectiveComponent* Objective, int32 IndicatorPresetIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTrackedState(UFortMinigameObjectiveComponent* Objective);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractionAllowed(UFortMinigameObjectiveComponent* Objective);
    
    UFUNCTION(BlueprintCallable)
    void HandleMinigameEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTrackedObjectivesByQuery(TArray<FTrackedObjective>& TrackedObjectives, uint8 TeamIndex, ETrackedObjectiveQuery QueryType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTrackedObjective(int32 TrackedIndex, FTrackedObjective& TrackedObjective) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearTrackedObjectives();
    
};

