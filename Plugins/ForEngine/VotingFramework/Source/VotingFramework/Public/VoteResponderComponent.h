#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "CastedVote.h"
#include "VoteListenerComponent.h"
#include "VoteSelection.h"
#include "VoteResponderComponent.generated.h"

class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVoteResponderComponent : public UVoteListenerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FVoteSelection> SupportedVoteSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldLockVotingAfterCasted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FCastedVote> PlayerCastedVotesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ActiveVoteSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ActiveVoteId;
    
public:
    UVoteResponderComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCastVoteSelection(const FUniqueNetIdRepl& InUserId, const FCastedVote& CastedVote);
    
public:
    UFUNCTION(BlueprintCallable)
    void CastManualVoteSelectionAtIndex(const APlayerState* InPlayerState, const int32 SelectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void CastManualVoteSelection(const APlayerState* InPlayerState, const FGameplayTag& VoteSelection);
    
    UFUNCTION(BlueprintCallable)
    void CastDefaultVoteSelection(const APlayerState* InPlayerState);
    
};

