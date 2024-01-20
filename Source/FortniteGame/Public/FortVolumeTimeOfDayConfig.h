#pragma once
#include "CoreMinimal.h"
#include "FortVolumeTimeOfDayConfig.generated.h"

USTRUCT(BlueprintType)
struct FFortVolumeTimeOfDayConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldOverrideTimeOfDay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUseRandomTimeOfDay: 1;
    
    FORTNITEGAME_API FFortVolumeTimeOfDayConfig();
};

