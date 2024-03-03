#pragma once
#include "CoreMinimal.h"
#include "SoundThreshold.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FSoundThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    FORTNITEUI_API FSoundThreshold();
};

