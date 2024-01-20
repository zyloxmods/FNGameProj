#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortMissionGenerationElementCostAndAvailabilityRow.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct FFortMissionGenerationElementCostAndAvailabilityRow : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* AvailabilityCurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AvailabilityCurveTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCost;
    
public:
    FORTNITEGAME_API FFortMissionGenerationElementCostAndAvailabilityRow();
};

