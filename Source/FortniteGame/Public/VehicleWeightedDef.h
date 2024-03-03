#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "VehicleWeightedDef.generated.h"

class UFortVehicleItemDefinition;

USTRUCT(BlueprintType)
struct FVehicleWeightedDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortVehicleItemDefinition> VehicleItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Weight;
    
    FORTNITEGAME_API FVehicleWeightedDef();
};

