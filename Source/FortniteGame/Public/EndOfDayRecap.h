#pragma once
#include "CoreMinimal.h"
#include "FortPlayerScoreReport.h"
#include "EndOfDayRecap.generated.h"

USTRUCT(BlueprintType)
struct FEndOfDayRecap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamScoreAtStartOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamScoreAtEndOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerScoreReport> ScoreReports;
    
    FORTNITEGAME_API FEndOfDayRecap();
};

