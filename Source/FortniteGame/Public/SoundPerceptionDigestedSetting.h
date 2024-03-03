#pragma once
#include "CoreMinimal.h"
#include "SoundPerceptionDigestedSetting.generated.h"

USTRUCT(BlueprintType)
struct FSoundPerceptionDigestedSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IgnoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OverrideReactionDistanceSq;
    
    FORTNITEGAME_API FSoundPerceptionDigestedSetting();
};

