#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCommunityVotingVoteCounter.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingVoteCounter : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasOneOrMoreVote;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_CurrentVoteNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_NextVoteNumber;
    
public:
    UFortCommunityVotingVoteCounter();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIncreaseVote();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeIn();
    
};

