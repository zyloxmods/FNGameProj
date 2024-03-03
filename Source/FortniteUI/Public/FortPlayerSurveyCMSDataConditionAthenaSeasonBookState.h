#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataConditionAthenaSeasonBookState.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonBookState : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool T;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionAthenaSeasonBookState();
};

