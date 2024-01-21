#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortPointsOnCurve.h"
#include "FortQueryData_CurvesAroundLine.generated.h"

UCLASS(Blueprintable)
class UFortQueryData_CurvesAroundLine : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPointsOnCurve PointsOnSideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPointsOnCurve PointsOnSideB;
    
public:
    UFortQueryData_CurvesAroundLine();
};

