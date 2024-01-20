#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAvailableMissionAlertData.h"
#include "FortAvailableMissionAlerts.generated.h"

USTRUCT(BlueprintType)
struct FFortAvailableMissionAlerts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TheaterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableMissionAlertData> AvailableMissionAlerts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime NextRefresh;
    
    FORTNITEGAME_API FFortAvailableMissionAlerts();
};

