#pragma once
#include "CoreMinimal.h"
#include "FortMissionAlertAvailableData.h"
#include "FortMissionAlertRegionData.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionAlertRegionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RegionUniqueIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionAlertAvailableData> AvailabilityDataPerCategory;
    
    FORTNITEGAME_API FFortMissionAlertRegionData();
};

