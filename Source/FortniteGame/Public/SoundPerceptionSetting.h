#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SoundPerceptionSetting.generated.h"

USTRUCT(BlueprintType)
struct FSoundPerceptionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IgnoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverrideReactionDistance;
    
    FORTNITEGAME_API FSoundPerceptionSetting();
};

