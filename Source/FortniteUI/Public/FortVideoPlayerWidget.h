#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortVideoPlayerWidget.generated.h"

class UFortMediaSubtitlesPlayer;
class UImage;
class UMediaPlayer;
class UMediaSoundComponent;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* VideoPlayer;
    
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
private:
    UFUNCTION(BlueprintCallable)
    void DynamicHandleOnOpenMediaFailed(const FString& FailedUrl);
    
    UFUNCTION(BlueprintCallable)
    void DynamicHandleOnMediaOpened(const FString& OpenedUrl);
    
};

