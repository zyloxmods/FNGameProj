#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "AttributeSet.h"
#include "FortCurieElementBehavior.h"
#include "FortCurieElementBehavior_Water.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCurieElementBehavior_Water : public UFortCurieElementBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle WaterMagnitudeToWaterContentIncreaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle WaterMagnitudeToFireIntensityDecreaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle WaterMagnitudeToWaterContentIncreaseRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle WaterMagnitudeToFireIntensityDecayRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterBodyInteractionMagnitude;
    
public:
    UFortCurieElementBehavior_Water();
};

