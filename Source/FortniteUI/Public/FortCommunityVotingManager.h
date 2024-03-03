#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCommunityVotingManager.generated.h"

class UFortMtxOfferData;

UCLASS(Blueprintable)
class UFortCommunityVotingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMtxOfferData*> CachedDisplayAssets;
    
public:
    UFortCommunityVotingManager();
private:
    UFUNCTION(BlueprintCallable)
    void RefreshVotingTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshVotes(const bool IsIncrementing);
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshRevealTimer();
    
    UFUNCTION(BlueprintCallable)
    void RefreshNewVoteTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnVotingTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnVotingStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRevealTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnNewVoteTimerEnd();
    
};

