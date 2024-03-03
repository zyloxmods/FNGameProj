#pragma once
#include "CoreMinimal.h"
#include "CachedPOIVolumeLocations.generated.h"

class AFortPoiVolume;

USTRUCT(BlueprintType)
struct FCachedPOIVolumeLocations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPoiVolume* POIVolume;
    
    FORTNITEGAME_API FCachedPOIVolumeLocations();
};

