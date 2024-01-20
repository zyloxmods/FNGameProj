#pragma once
#include "CoreMinimal.h"
#include "EDynamicSoundOverride.h"
#include "AudioDynamicSoundData.generated.h"

USTRUCT(BlueprintType)
struct FAudioDynamicSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDynamicSoundOverride::Type> SoundOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    FORTNITEGAME_API FAudioDynamicSoundData();
};

