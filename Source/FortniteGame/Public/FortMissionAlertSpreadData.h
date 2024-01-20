#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortMissionAlertSpreadData.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionAlertSpreadData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalChancesToSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumTilesToSpreadTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpreadInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionAlertRowName;
    
    FORTNITEGAME_API FFortMissionAlertSpreadData();
};

