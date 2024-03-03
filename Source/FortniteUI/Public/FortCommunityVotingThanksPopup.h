#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCommunityVotingThanksPopup.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingThanksPopup : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ThanksForVoting_Countdown;
    
public:
    UFortCommunityVotingThanksPopup();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCountdown();
    
    UFUNCTION(BlueprintCallable)
    void StartCountdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInPopup();
    
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnFadeOutStarts();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnFadeOutEnds();
    
};

