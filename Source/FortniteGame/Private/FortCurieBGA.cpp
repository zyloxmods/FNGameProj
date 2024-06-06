#include "FortCurieBGA.h"
#include "FortCurieComponent.h"

AFortCurieBGA::AFortCurieBGA() {
    CurieComponent = CreateDefaultSubobject<UFortCurieComponent>(TEXT("CurieComponent"));
}

