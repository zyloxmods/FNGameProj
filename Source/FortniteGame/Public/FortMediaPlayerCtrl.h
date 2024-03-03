#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MediaPlayerOptions.h"
#include "FortMediaPlayerCtrl.generated.h"

class UFortStreamMediaSource;
class UMediaPlayer;
class UMediaSource;

UCLASS(Blueprintable, MinimalAPI)
class UFortMediaPlayerCtrl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialBufferDurationInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentBufferDurationInSeconds;
    
    UFortMediaPlayerCtrl();
    UFUNCTION(BlueprintCallable)
    void SetPlayerStartTime(float InRequestSentTime);
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSourceWithOptions(UMediaSource* InMediaSource, const FMediaPlayerOptions& InOptions);
    
};

