#pragma once
#include "CoreMinimal.h"
#include "FortMissionAlertAvailableData.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionAlertAvailableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionAlertCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMissionAlertsAvailable;
    
    FORTNITEGAME_API FFortMissionAlertAvailableData();
};

