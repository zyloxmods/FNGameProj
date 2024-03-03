#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EChannelSpeakerStyle.h"
#include "FortVoiceChannelSpeakerWidget.generated.h"

class UCommonBorder;
class UCommonTextBlock;
class UFortSocialAvatarIcon;
class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortVoiceChannelSpeakerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToleratedSilenceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerfUpdateIntervalInSecs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenCloseAnimProxyDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerfCollapseHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkingAnimProxyDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_ScaleBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* AvatarIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ActiveVoiceIcon;
    
public:
    UFortVoiceChannelSpeakerWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStyleAssigned(EChannelSpeakerStyle NewStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimateTalkingChanged(bool bIsNowTalking);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAnimationFinished();
    
};

