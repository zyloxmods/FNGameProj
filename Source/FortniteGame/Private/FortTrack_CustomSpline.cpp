#include "FortTrack_CustomSpline.h"
#include "Components/SplineComponent.h"

AFortTrack_CustomSpline::AFortTrack_CustomSpline() {
    this->CustomSplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("CustomSplineComp"));
}

