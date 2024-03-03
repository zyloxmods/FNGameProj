#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlayerLODViewConeHysteresisConfig.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLODViewConeHysteresisConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AdditionalObserverVisionAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AdditionalRadius;
    
    FORTNITEGAME_API FPlayerLODViewConeHysteresisConfig();
};

