#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AmbientAudioBase.h"
#include "AmbientAudioOneShot.generated.h"

USTRUCT(BlueprintType)
struct AMBIENTAUDIO_API FAmbientAudioOneShot : public FAmbientAudioBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RetriggerTimeRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TriggerDistanceRange;
    
    FAmbientAudioOneShot();
};

