#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSplineBase.h"
#include "FortCatmullRomSpline.generated.h"

USTRUCT(BlueprintType)
struct FFortCatmullRomSpline : public FFortSplineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ControlPoints;
    
public:
    FORTNITEGAME_API FFortCatmullRomSpline();
};

