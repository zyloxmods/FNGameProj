#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AthenaMatchStats.h"
#include "AthenaStatsSet.generated.h"

UCLASS(Blueprintable)
class UAthenaStatsSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaMatchStats CumulativeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaMatchStats> BestMatches;
    
    UAthenaStatsSet();
};

