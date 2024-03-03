#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataAthenaSeasonStat.h"
#include "FortPlayerSurveyCMSDataConditionSimpleIntComparisonBase.h"
#include "FortPlayerSurveyCMSDataConditionAthenaSeasonStat.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonStat : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataAthenaSeasonStat S;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionAthenaSeasonStat();
};

