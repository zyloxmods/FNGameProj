#include "FortTimeOfDayManagerAtmosphere.h"
#include "Components/SkyAtmosphereComponent.h"

AFortTimeOfDayManagerAtmosphere::AFortTimeOfDayManagerAtmosphere() {
    SkyAtmosphereComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphereComponent"));
}

