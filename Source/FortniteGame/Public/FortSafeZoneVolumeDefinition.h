#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortSafeZoneVolumeDefinition.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct FFortSafeZoneVolumeDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RejectionChance;
    
public:
    FORTNITEGAME_API FFortSafeZoneVolumeDefinition();
};

