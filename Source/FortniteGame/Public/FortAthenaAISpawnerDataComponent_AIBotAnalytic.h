#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_AnalyticBase.h"
#include "FortAthenaAISpawnerDataComponent_AIBotAnalytic.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIBotAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BotIDSuffix;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotAnalytic();
};

