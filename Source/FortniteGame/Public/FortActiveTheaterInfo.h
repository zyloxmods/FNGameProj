#pragma once
#include "CoreMinimal.h"
#include "FortAvailableMissionAlerts.h"
#include "FortAvailableTheaterMissions.h"
#include "FortTheaterMapData.h"
#include "FortActiveTheaterInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortActiveTheaterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTheaterMapData> Theaters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableTheaterMissions> Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableMissionAlerts> MissionAlerts;
    
    FORTNITEGAME_API FFortActiveTheaterInfo();
};

