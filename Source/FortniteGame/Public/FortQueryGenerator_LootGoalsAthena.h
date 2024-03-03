#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "FortAIAssignmentIdentifier.h"
#include "Templates/SubclassOf.h"
#include "FortQueryGenerator_LootGoalsAthena.generated.h"

class UEnvQueryContext;
class UFortAIAssignmentSettings;

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_LootGoalsAthena : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIAssignmentIdentifier AssignmentIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignmentSettings* AssignmentSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue HorizontalHalfExtents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue VerticalHalfExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAvailableLootOnly: 1;
    
    UFortQueryGenerator_LootGoalsAthena();
};

