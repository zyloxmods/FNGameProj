#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAvailableMissionData.h"
#include "FortAvailableTheaterMissions.generated.h"

USTRUCT(BlueprintType)
struct FFortAvailableTheaterMissions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TheaterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableMissionData> AvailableMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime NextRefresh;
    
    FORTNITEGAME_API FFortAvailableTheaterMissions();
};

