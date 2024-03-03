#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "MeshNetworkComponent.h"
#include "CastedVote.h"
#include "EVoteSessionNetworkType.h"
#include "VoteRuntimeArray.h"
#include "VoteSelectionResultsArray.h"
#include "VoteSessionRuntimeArray.h"
#include "VoteSessionSettings.h"
#include "VoteBroadcasterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVoteBroadcasterComponent : public UMeshNetworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoteSessionSettings> VoteSessionSettingsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVoteSessionRuntimeArray VoteSessionRuntimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVoteRuntimeArray VoteRuntimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVoteSelectionResultsArray VoteResultsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FCastedVote> PlayerCastedVotesMap;
    
public:
    UVoteBroadcasterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void VoteStart(FName VoteSessionId, FName VoteId);
    
    UFUNCTION(BlueprintCallable)
    void VoteSetup(FName VoteSessionId, FName VoteId);
    
    UFUNCTION(BlueprintCallable)
    void VoteSessionShutdown(FName VoteSessionId);
    
    UFUNCTION(BlueprintCallable)
    void VoteSessionSetup(FName VoteSessionId, FName StartingVoteId, EVoteSessionNetworkType NetworkType);
    
    UFUNCTION(BlueprintCallable)
    void VoteSessionComplete(FName VoteSessionId);
    
    UFUNCTION(BlueprintCallable)
    void VoteEnd(FName VoteSessionId, FName VoteId, FName WinningVoteSelectionId);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitVotesAggregated(FName VoteSessionId, FName VoteId, FName VoteSelectionId, int32 VoteDelta);
    
    UFUNCTION(BlueprintCallable)
    void OnVoteCasted(const FUniqueNetIdRepl& UserNetId, const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, const FGameplayTag& VoteSelectionId);
    
};

