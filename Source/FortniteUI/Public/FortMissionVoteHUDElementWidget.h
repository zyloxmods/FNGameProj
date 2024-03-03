#pragma once
#include "CoreMinimal.h"
#include "EFortVoteArbitratorType.h"
#include "EFortVoteStatus.h"
#include "EFortVoteType.h"
#include "Voter.h"
#include "FortHUDElementWidget.h"
#include "FortMissionVoteHUDElementWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissionVoteHUDElementWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UFortMissionVoteHUDElementWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterFailsafeForVoteType(EFortVoteType VoteType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteUpdated(EFortVoteType VoteType, int32 YesVoteCount, int32 NoVoteCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteStarted(EFortVoteType VoteType, EFortVoteArbitratorType ArbitratorType, int32 YesVoteCount, int32 NoVoteCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteEnded(EFortVoteType VoteType, EFortVoteArbitratorType ArbitratorType, bool VoteSucceeded);
    
    UFUNCTION(BlueprintCallable)
    bool IsMultiplayerVote(EFortVoteType VoteType);
    
    UFUNCTION(BlueprintCallable)
    bool HasLocalPlayerVoted(EFortVoteType VoteType);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMissionActivationVoteUpdate(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, const TArray<FVoter>& Voters);
    
    UFUNCTION(BlueprintCallable)
    void HandleDifficultyIncreaseVoteUpdate(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, const TArray<FVoter>& Voters);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetVoteTimeRemaining(EFortVoteType VoteType);
    
};

