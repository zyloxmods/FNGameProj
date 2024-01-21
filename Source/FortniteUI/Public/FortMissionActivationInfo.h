#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortVoteArbitratorType.h"
#include "EFortVoteStatus.h"
#include "EFortVoteType.h"
#include "FortTeamMemberInfo.h"
#include "Voter.h"
#include "GameplayTagContainer.h"
#include "FortItemDelta.h"
#include "FortMissionActivationInfo.generated.h"

class AFortGameStateZone;
class AFortMission;
class AFortPlayerController;
class UCurveFloat;
class UFortMissionInfo;

UCLASS(Blueprintable)
class UFortMissionActivationInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMultiplayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FortPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateZone* GameStateZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* DifficultyIncreaseBluGloCurve;
    
public:
    UFortMissionActivationInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText TimeSecondsToText(float InSeconds) const;
    
    UFUNCTION(BlueprintCallable)
    void SubmitVote(EFortVoteType VoteType, bool bApprove);
    
    UFUNCTION(BlueprintCallable)
    void RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoteLocked(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoteActive(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerVoteInstigator(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyVoteActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasPlayerVoted(EFortVoteType VoteType);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTeamMemberRemoved(int32 RemovedIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleTeamMemberAdded(FFortTeamMemberInfo NewInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, const TArray<FVoter>& Voters);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoteTimeRemaining(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVoter> GetVoters(EFortVoteType VoteType);
    
    UFUNCTION(BlueprintCallable)
    void GetVoteCounts(EFortVoteType VoteType, int32& OutYesVoteCount, int32& OutNoVoteCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartObjectiveBluGloRequirement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMissionInfo* GetPrimaryMissionInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMission* GetPrimaryMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortVoteType GetMissionVoteType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionObjectiveTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLockoutTimeRemaining(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetInstigatorId(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIncreaseDifficultyBluGloRequirement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDeltaRewards(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<FFortItemDelta>& DeltaRewards) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableBluGloCount() const;
    
    UFUNCTION(BlueprintCallable)
    EFortVoteArbitratorType GetArbitratorType(EFortVoteType VoteType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPrimaryMissionContainTags(const FGameplayTagContainer& Tags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRequestVote(EFortVoteType VoteType) const;
    
};

