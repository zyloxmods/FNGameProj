#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueAudioInfo.h"
#include "FortGameplayCueAudioInfo_Looping.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayCueAudioInfo_Looping : public FFortGameplayCueAudioInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopingSoundFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopingSoundVolumeLevel;
    
    FORTNITEGAME_API FFortGameplayCueAudioInfo_Looping();
};

