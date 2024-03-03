#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortMediaSubtitlesPlayer.generated.h"

class UMediaPlayer;
class UOverlays;

UCLASS(Blueprintable)
class SUBTITLESWIDGETS_API UFortMediaSubtitlesPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOverlays* SourceSubtitles;
    
    UFortMediaSubtitlesPlayer();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitles(UOverlays* Subtitles);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void BindToMediaPlayer(UMediaPlayer* InMediaPlayer);
    
};

