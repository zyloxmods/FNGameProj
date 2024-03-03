#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortStopSimulatingRepData.generated.h"

USTRUCT(BlueprintType)
struct FFortStopSimulatingRepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RepIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StopLocation;
    
    FORTNITEGAME_API FFortStopSimulatingRepData();
};

