#pragma once
#include "CoreMinimal.h"
#include "MediaPlayerOptions.h"
#include "FortUserWidget.h"
#include "OnMediaWidgetMediaOpenedDelegate.h"
#include "FortMovieWidget.generated.h"

class UMediaPlayer;
class UMediaSoundComponent;
class UMediaSource;
class UMediaTexture;

UCLASS(Blueprintable, EditInlineNew)
class UFortMovieWidget : public UFortUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaWidgetMediaOpened OnMediaOpened;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
public:
    UFortMovieWidget();
    UFUNCTION(BlueprintCallable)
    bool SetMediaSource(UMediaPlayer* InMediaPlayer, UMediaSource* InMediaSource, const FMediaPlayerOptions& PlayerOptions, bool bPlayOnOpen, bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopMovie();
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayMovie(bool bShouldRewind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MediaDimensionsUpdated(float NewWidth, float NewHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayerForSource(UMediaSource* InMediaSource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaTexture* GetMediaTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaSoundComponent* GetMediaSoundComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void CleanupMediaPlayer();
    
};

