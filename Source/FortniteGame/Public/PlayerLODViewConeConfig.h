#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EFortAILODLevel.h"
#include "PlayerLODViewConeConfig.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLODViewConeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ObserverVisionAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ViewConeMaxRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AlwaysVisibleRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAILODLevel FortAILODLevel;
    
    FORTNITEGAME_API FPlayerLODViewConeConfig();
};

