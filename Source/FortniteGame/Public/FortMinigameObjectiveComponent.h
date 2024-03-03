#pragma once
#include "CoreMinimal.h"
#include "EObjectiveType.h"
#include "FortMinigameLogicComponent.h"
#include "MinigameObjectiveUpdatedDelegate.h"
#include "FortMinigameObjectiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMinigameObjectiveComponent : public UFortMinigameLogicComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameObjectiveUpdated OnObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameObjectiveUpdated OnObjectiveStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameObjectiveUpdated OnObjectiveAllowedInteractionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TrackedIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 TrackedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 TrackedStateOwnerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInteractionAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EObjectiveType ObjectiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPurgeTrackingHistoryOnRemoval;
    
public:
    UFortMinigameObjectiveComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopTracking(bool bPurgeHistory, float Percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartTracking(int32 IndicatorPresetIndex, float Percentage, EObjectiveType Type, uint8 State, uint8 StateOwnerTeam, bool bInIsInteractionAllowed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTrackedState(uint8 InState, uint8 InStateOwnerTeam);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTrackedProgress(float Percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsInteractionAllowed(bool bInIsInteractionAllowed);
    
};

