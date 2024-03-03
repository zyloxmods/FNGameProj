#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "FortQueryGenerator_BuildingsOnCachedPath.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_BuildingsOnCachedPath : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> CachedPathSource;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue bIncludeWalls;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue bIncludeFloors;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue bIncludeCenterCell;
    
public:
    UFortQueryGenerator_BuildingsOnCachedPath();
};

