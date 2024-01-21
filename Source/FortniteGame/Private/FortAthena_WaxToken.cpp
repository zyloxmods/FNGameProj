#include "FortAthena_WaxToken.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"




AFortAthena_WaxToken::AFortAthena_WaxToken() {
    this->TokenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TokenMesh"));
    this->EntrySpline = CreateDefaultSubobject<USplineComponent>(TEXT("EntrySpline"));
    this->ExitSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ExitSpline"));
    this->ReusedSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ReusedSpline"));
    this->Target = NULL;
    this->PayloadCount = 0;
    this->CurrentState = EWaxTokenState::None;
    this->TimeInState = 0.00f;
    this->InterpolationSpeed = 0.00f;
}

