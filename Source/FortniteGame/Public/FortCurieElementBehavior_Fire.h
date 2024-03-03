#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortCurieElementBehavior.h"
#include "FortCurieElementBehavior_Fire.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCurieElementBehavior_Fire : public UFortCurieElementBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurningRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle FireMagnitudeToWaterContentDecreaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle FireMagnitudeToWaterIntensityDecreaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle FireMagnitudeToIceIntensityDecreaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle FireMagnitudeToWaterIntensityDecayRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle FireMagnitudeToIceIntensityDecayRateCurve;
    
public:
    UFortCurieElementBehavior_Fire();
};

