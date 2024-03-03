#pragma once
#include "CoreMinimal.h"
#include "LocalizedOverlays.h"
#include "FortDownloadLocalizedOverlays.generated.h"

class UMediaPlayer;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortDownloadLocalizedOverlays : public ULocalizedOverlays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UFortDownloadLocalizedOverlays();
};

