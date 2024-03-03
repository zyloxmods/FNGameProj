#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "OnMediaOpenFailedDelegate.h"
#include "OnMediaOpenedDelegate.h"
#include "OnMediaPlayerEndReachedDelegate.h"
#include "OnSkipButtonClickedDelegate.h"
#include "FortActivatableVideoPanel.generated.h"

class UCommonButton;
class UFortVideoPlayerWidget;
class UImage;
class UMediaPlayer;
class USoundMix;
class UStreamMediaSource;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivatableVideoPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkipButtonClicked OnSkipButtonClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwriteSkip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerEndReached OnMediaPlayerEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaOpened OnMediaOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaOpenFailed OnMediaOpenFailed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticallyDismissPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayOnActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSkipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ControlsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastInteractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVideoPlayerWidget* VideoPlayerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ThrobberBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Throbber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* ActiveSoundMix;
    
public:
    UFortActivatableVideoPanel();
    UFUNCTION(BlueprintCallable)
    bool StreamVideoFromSource(UStreamMediaSource* StreamSource);
    
    UFUNCTION(BlueprintCallable)
    bool StreamVideo(const FString& VideoURL);
    
    UFUNCTION(BlueprintCallable)
    void StartVideo();
    
    UFUNCTION(BlueprintCallable)
    void ShowThrobber();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowControls();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAutoPlayVideo(FName AssetName, bool bAllowRecord) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MediaOpenFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MediaOpened();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LoadVideo(FName VideoId, bool bIsAutoPlay, bool bForceDefaultAudioTrack, FName VideoString);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideControls();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSkipButton(bool bAllowSkip);
    
};

