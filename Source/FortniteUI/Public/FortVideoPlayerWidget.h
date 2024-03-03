#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortVideoPlayerWidget.generated.h"

class UFortMediaPlayerCtrl;
class UFortMediaSubtitlesPlayer;
class UImage;
class UMaterialInterface;
class UMediaPlayer;
class UMediaSoundComponent;
class USoundClass;
class USubtitleDisplay;

UCLASS(Blueprintable, EditInlineNew)
class UFortVideoPlayerWidget : public UFortUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDefaultAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* VideoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMediaPlayerCtrl* MediaController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMediaSubtitlesPlayer* SubtitlePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_VideoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitleDisplay* Subtitles;
    
public:
    UFortVideoPlayerWidget();
    UFUNCTION(BlueprintCallable)
    void SetupMediaController(float MediaStartTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundClass(USoundClass* InSoundClass);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaMaterial(UMaterialInterface* VideoMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DynamicHandleOnOpenMediaFailed(const FString& FailedUrl);
    
    UFUNCTION(BlueprintCallable)
    void DynamicHandleOnMediaOpened(const FString& OpenedUrl);
    
};

