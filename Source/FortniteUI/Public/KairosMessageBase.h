#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KairosMessageBase.generated.h"

class UCommonButton;

UCLASS(Blueprintable, EditInlineNew)
class UKairosMessageBase : public UUserWidget {
    GENERATED_BODY()
public:
    UKairosMessageBase();
    UFUNCTION(BlueprintCallable)
    void StopPlaying();
    
    UFUNCTION(BlueprintCallable)
    void PlayNextMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewMessagesQueryed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewMessageReceived();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessagesReady(float SoundDuration);
    
    UFUNCTION(BlueprintCallable)
    int32 NumMessagesRemaining();
    
    UFUNCTION(BlueprintCallable)
    void ForceClickCommonButton(UCommonButton* Button);
    
    UFUNCTION(BlueprintCallable)
    bool FindUnreadMessages();
    
    UFUNCTION(BlueprintCallable)
    void DisplayMessages();
    
};

