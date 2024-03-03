#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCommunityVotingAvailableVotesWidget.generated.h"

class UCommonTextBlock;
class UFortEventDateTimeTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingAvailableVotesWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_CurrentVoteNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_NextVoteNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventDateTimeTextBlock* DateTimeTextBlock_VoteCountdown;
    
public:
    UFortCommunityVotingAvailableVotesWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIncreaseVote();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEventOver(float StartValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDecreaseVote();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCountdown(float StartValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAvailableVotes();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCurrentVoteNumber();
    
};

