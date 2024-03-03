#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIAnalyticData.h"
#include "FortAthenaAISpawnerDataComponent_AnalyticBase.h"
#include "FortAthenaAISpawnerDataComponent_AIAnalytic.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaAIAnalyticData AnalyticData;
    
public:
    UFortAthenaAISpawnerDataComponent_AIAnalytic();
};

