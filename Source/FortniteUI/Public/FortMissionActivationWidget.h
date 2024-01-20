#pragma once
#include "CoreMinimal.h"
#include "EFortVoteType.h"
#include "GameplayTagContainer.h"
#include "EFortMissionActivationWidgetState.h"
#include "FortActivatablePanel.h"
#include "FortMissionActivationWidget.generated.h"

class UCurveFloat;
class UFortMissionActivationInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissionActivationWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMissionActivationInfo* InfoObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ReadyUpObjectiveHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DifficultyIncreaseBluGloCurve;
    
public:
    UFortMissionActivationWidget();
    UFUNCTION(BlueprintCallable)
    void RequestStartObjectiveState();
    
    UFUNCTION(BlueprintCallable)
    void RequestDifficultyIncreaseState();
    
    UFUNCTION(BlueprintCallable)
    void RequestDefaultState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateUpdated(EFortMissionActivationWidgetState ActiveState, EFortMissionActivationWidgetState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiplayerChangedBP(bool bIsMultiplayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortMissionActivationWidgetState GetCurrentState() const;
    
};

