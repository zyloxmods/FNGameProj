#pragma once
#include "CoreMinimal.h"
#include "FortMissionAlertRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionAlertRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionAlertCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespectTileRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowQuickplay;
    
    FORTNITEGAME_API FFortMissionAlertRuntimeData();
};

