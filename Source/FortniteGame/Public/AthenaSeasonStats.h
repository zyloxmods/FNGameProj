#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AthenaSeasonStats.generated.h"

class UAthenaSeasonItemDefinition;
class UAthenaStatsSet;

UCLASS(Blueprintable)
class UAthenaSeasonStats : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaStatsSet* CumulativeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAthenaStatsSet*> Buckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonDefinition;
    
    UAthenaSeasonStats();
    UFUNCTION(BlueprintCallable)
    UAthenaSeasonItemDefinition* GetSeasonDefintion();
    
};

