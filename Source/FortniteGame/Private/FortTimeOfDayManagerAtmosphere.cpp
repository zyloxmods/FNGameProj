#include "FortTimeOfDayManagerAtmosphere.h"
#include "Components/SkyAtmosphereComponent.h"

AFortTimeOfDayManagerAtmosphere::AFortTimeOfDayManagerAtmosphere() {
    this->SkyAtmosphereComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphereComponent"));
}

