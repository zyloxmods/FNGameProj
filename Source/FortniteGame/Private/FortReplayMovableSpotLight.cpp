#include "FortReplayMovableSpotLight.h"
#include "Components/SpotLightComponent.h"

AFortReplayMovableSpotLight::AFortReplayMovableSpotLight() {
    this->SpotLightComp = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight0"));
    this->bDebugDraw = false;
}

