#include "FortAthena_WaxToken.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"




AFortAthena_WaxToken::AFortAthena_WaxToken() {
    TokenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TokenMesh"));
    EntrySpline = CreateDefaultSubobject<USplineComponent>(TEXT("EntrySpline"));
    ExitSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ExitSpline"));
    ReusedSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ReusedSpline"));
    Target = NULL;
    PayloadCount = 0;
    CurrentState = EWaxTokenState::None;
    TimeInState = 1;
    InterpolationSpeed = 1;
}

