#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueAttachInfo.h"
#include "FortGameplayCueSpawnCondition.h"
#include "FortGameplayCueAudioInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortGameplayCueAudioInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueAttachInfo Attachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforePlayInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCondition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttachment: 1;
    
    FORTNITEGAME_API FFortGameplayCueAudioInfo();
};

