#include "FortTrack_CustomSpline.h"
#include "Components/SplineComponent.h"

AFortTrack_CustomSpline::AFortTrack_CustomSpline() {
    CustomSplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("CustomSplineComp"));
}

