#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataAggregateOp.h"
#include "EFortPlayerSurveyCMSDataPlaylistCategory.h"
#include "FortPlayerSurveyCMSDataConditionSimpleIntComparisonBase.h"
#include "FortPlayerSurveyCMSDataConditionAthenaMatchStat.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionAthenaMatchStat : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortPlayerSurveyCMSDataPlaylistCategory> pt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataAggregateOp ag;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionAthenaMatchStat();
};

