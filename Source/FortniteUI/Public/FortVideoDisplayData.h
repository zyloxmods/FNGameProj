#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortVideoInfo.h"
#include "Templates/SubclassOf.h"
#include "FortVideoDisplayData.generated.h"

class UFortActivatableVideoPanel;
class UFortMediaSubtitlesPlayer;
class UMediaPlayer;

UCLASS(Blueprintable)
class UFortVideoDisplayData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* FortVideoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMediaSubtitlesPlayer* SubtitlePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatableVideoPanel> VideoActivatablePanelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> LocaleAudioTrackIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortVideoInfo> Videos;
    
    UFortVideoDisplayData();
};

