#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortVoiceChannelToggleButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVoiceChannelToggleButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VoiceChannel;
    
public:
    UFortVoiceChannelToggleButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceChannelSelected(bool bIsPartyChat);
    
};

