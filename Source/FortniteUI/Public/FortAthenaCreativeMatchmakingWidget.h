#pragma once
#include "CoreMinimal.h"
#include "EGameReadiness.h"
#include "UpdateManager.h"
#include "FortMatchmakingWidgetBase.h"
#include "FortAthenaCreativeMatchmakingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaCreativeMatchmakingWidget : public UFortMatchmakingWidgetBase {
    GENERATED_BODY()
public:
    UFortAthenaCreativeMatchmakingWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void TogglePlayerReadyState();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupOwningPlayerForReadyCheckInput();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOwningPlayerReadyState(bool bInReadyState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedSquadReadyInformationBP(int32 SquadMembers, int32 ReadySquadMembers, bool AmIReady);
    
private:
    UFUNCTION(BlueprintCallable)
    void InGameMathcmakingUpdateCheckFailed(EUpdateCompletionStatus Status);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyPlayerOptedOutOfCrossPlatformPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePartyLeaderReadinessChangedBP(EGameReadiness GameReadiness, int32 SquadMemberIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchmakingPartyReadyBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleInGameReadinessChangedBP(EGameReadiness GameReadiness, int32 SquadMemberIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableOwningPlayerForReadyCheckInput();
    
};

