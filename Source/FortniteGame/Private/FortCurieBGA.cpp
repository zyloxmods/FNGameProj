#include "FortCurieBGA.h"
#include "FortCurieComponent.h"

AFortCurieBGA::AFortCurieBGA() {
    this->CurieComponent = CreateDefaultSubobject<UFortCurieComponent>(TEXT("CurieComponent"));
}

