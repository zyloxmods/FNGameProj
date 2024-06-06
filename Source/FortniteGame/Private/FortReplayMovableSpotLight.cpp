#include "FortReplayMovableSpotLight.h"
#include "Components/SpotLightComponent.h"

AFortReplayMovableSpotLight::AFortReplayMovableSpotLight() {
    SpotLightComp = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight0"));
    bDebugDraw = false;
}

