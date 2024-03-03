#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "EFortPointsFromNavGraphGoalPathDistanceFilterOperator.h"
#include "Templates/SubclassOf.h"
#include "FortQueryGenerator_PointsFromNavGraph.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_PointsFromNavGraph : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MinPathDistance;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxPathDistance;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue Density;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ExploreDirectionYaw;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection ExploreDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExploreAngleDot;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ExploreInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLimitExplorationDirection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyFlatSurface: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseParameterizedDirection: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHeightCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFilterAllowTerrain: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFilterAllowBuildings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFilterAllowDropdown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFilterAllowClimbup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFilterAllowSmash: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortPointsFromNavGraphGoalPathDistanceFilterOperator::Type> PathDistanceFilterOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UFortQueryGenerator_PointsFromNavGraph();
};

