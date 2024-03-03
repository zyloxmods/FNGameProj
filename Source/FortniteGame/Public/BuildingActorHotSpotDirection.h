#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortHotSpotDirection.h"
#include "EHotspotTypeConfigMode.h"
#include "BuildingActorHotSpotDirection.generated.h"

class UAIHotSpotConfig;

USTRUCT(BlueprintType)
struct FBuildingActorHotSpotDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIHotSpotConfig* HotSpotConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMirrorX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMirrorY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHotSpotDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHotspotTypeConfigMode TypeConfigUsage;
    
    FORTNITEGAME_API FBuildingActorHotSpotDirection();
};

