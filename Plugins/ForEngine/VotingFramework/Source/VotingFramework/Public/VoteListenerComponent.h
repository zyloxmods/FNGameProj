#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EVoteSessionNetworkType.h"
#include "EVoteSessionState.h"
#include "EVoteState.h"
#include "OnVoteChangeDelegate.h"
#include "OnVoteEndDelegate.h"
#include "OnVoteSessionCompleteDelegate.h"
#include "OnVoteSessionSetupDelegate.h"
#include "OnVoteSessionShutdownDelegate.h"
#include "OnVoteSessionVotingDelegate.h"
#include "OnVoteSetupDelegate.h"
#include "OnVoteStartDelegate.h"
#include "VoteListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVoteListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteSessionSetup OnVoteSessionSetupEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteSessionVoting OnVoteSessionVotingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteSetup OnVoteSetupEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteStart OnVoteStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteChange OnVoteChangeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteEnd OnVoteEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteSessionComplete OnVoteSessionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteSessionShutdown OnVoteSessionShutdownEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequestedVoteSessionIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequestedVoteIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequestedVoteSelectionIds;
    
public:
    UVoteListenerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnVoteStart(const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, EVoteState VoteState);
    
    UFUNCTION(BlueprintCallable)
    void OnVoteSetup(const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, EVoteState VoteState);
    
    UFUNCTION(BlueprintCallable)
    void OnVoteSessionVoting(const FGameplayTag& VoteSessionId, const FGameplayTag& StartingVoteId, EVoteSessionState SessionState);
    
    UFUNCTION(BlueprintCallable)
    void OnVoteSessionShutdown(const FGameplayTag& VoteSessionId);
    
    UFUNCTION(BlueprintCallable)
    void OnVoteSessionSetup(const FGameplayTag& VoteSessionId, const FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState);
    
    UFUNCTION(BlueprintCallable)
    void OnVoteSessionComplete(const FGameplayTag& VoteSessionId);
    
    UFUNCTION(BlueprintCallable)
    void OnVoteEnd(const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, const FGameplayTag& WinningVoteSelectionId, EVoteState VoteState);
    
    UFUNCTION(BlueprintCallable)
    void OnVoteChange(const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, const FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal);
    
};

