#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "WaterSplineCurveDefaults.h"
#include "WaterSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterSplineCurveDefaults WaterSplineDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterSplineCurveDefaults PreviousWaterSplineDefaults;
    
    UWaterSplineComponent();
};

