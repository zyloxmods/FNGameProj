#pragma once
#include "CoreMinimal.h"
#include "FortPlacementActorFinderEntry.h"
#include "FortPlacementActorFinderInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPlacementActorFinderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlacementActorFinderEntry> BuildingData;
    
    FFortPlacementActorFinderInfo();
};

