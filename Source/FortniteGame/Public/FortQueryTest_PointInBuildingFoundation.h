#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_PointInBuildingFoundation.generated.h"

class ABuildingFoundation;
class UEnvQueryContext;

UCLASS(Blueprintable)
class UFortQueryTest_PointInBuildingFoundation : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> BuildingFoundationContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingFoundation> BuildingFoundationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundingBoxScale;
    
public:
    UFortQueryTest_PointInBuildingFoundation();
};

