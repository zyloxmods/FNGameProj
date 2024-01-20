#pragma once
#include "CoreMinimal.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileAthenaStats.generated.h"

class UAthenaSeasonStats;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileAthenaStats : public UFortMcpProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSeasonStats* LifeTimeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSeasonStats*> LifeTimeAndSeasonStatsList;
    
public:
    UFortMcpProfileAthenaStats();
    UFUNCTION(BlueprintCallable)
    UAthenaSeasonStats* GetLifetimeStats();
    
    UFUNCTION(BlueprintCallable)
    TArray<UAthenaSeasonStats*> GetLifeTimeAndSeasonList();
    
};

