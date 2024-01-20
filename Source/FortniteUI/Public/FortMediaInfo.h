#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortMediaInfo.generated.h"

class UMediaPlayer;
class UMediaSource;

UCLASS(Blueprintable)
class UFortMediaInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVideoStreamed;
    
    UFortMediaInfo();
};

