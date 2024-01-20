#pragma once
#include "CoreMinimal.h"
#include "FortMissionAlertRegionData.h"
#include "FortTheaterMapMissionAlertData.generated.h"

USTRUCT(BlueprintType)
struct FFortTheaterMapMissionAlertData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionAlertRegionData> AvailabilityDataPerRegion;
    
    FORTNITEGAME_API FFortTheaterMapMissionAlertData();
};

