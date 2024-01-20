#pragma once
#include "CoreMinimal.h"
#include "EFortStrategicBuildingLevelCriteriaDisplayRepresentation.h"
#include "StrategicBuildingLevelCriteria.generated.h"

USTRUCT(BlueprintType)
struct FStrategicBuildingLevelCriteria {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockRequirementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortStrategicBuildingLevelCriteriaDisplayRepresentation RequirementDisplayRepresentation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnlockRequirementQuantity;
    
    FORTNITEGAME_API FStrategicBuildingLevelCriteria();
};

