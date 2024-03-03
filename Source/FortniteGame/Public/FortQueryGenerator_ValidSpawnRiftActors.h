#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "FortQueryGenerator_ValidSpawnRiftActors.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_ValidSpawnRiftActors : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue NumAIForGroup;
    
    UFortQueryGenerator_ValidSpawnRiftActors();
};

