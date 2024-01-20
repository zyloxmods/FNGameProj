#pragma once
#include "CoreMinimal.h"
#include "FortTrack.h"
#include "FortTrack_CustomSpline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class AFortTrack_CustomSpline : public AFortTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* CustomSplineComp;
    
    AFortTrack_CustomSpline();
};

