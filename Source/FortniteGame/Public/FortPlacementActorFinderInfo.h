#pragma once
#include "CoreMinimal.h"
#include "FortPlacementActorFinderEntry.h"
#include "FortPlacementActorFinderInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortPlacementActorFinderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlacementActorFinderEntry> BuildingData;
    
    FORTNITEGAME_API FFortPlacementActorFinderInfo();
};

