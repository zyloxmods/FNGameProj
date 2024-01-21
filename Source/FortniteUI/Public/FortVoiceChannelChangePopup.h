#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortVoiceChannelChangePopup.generated.h"

class UCommonRichTextBlock;
class UFortUINotification;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortVoiceChannelChangePopup : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnToastDisplayFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToastDisplayFinished OnToastFinishedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayStayInPartyChannelNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisiblityInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PartyChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JustJoinedChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StayedInChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_SimplePopup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_ChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_AutomaticActionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_DescriptionText;
    
public:
    UFortVoiceChannelChangePopup();
    UFUNCTION(BlueprintCallable)
    void SetToast(UFortUINotification* ToastNotification);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOpenAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayCloseAnimation();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOpenCloseAnimationFinished();
    
};

