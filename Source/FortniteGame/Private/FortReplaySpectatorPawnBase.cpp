#include "FortReplaySpectatorPawnBase.h"
#include "FortSpectatorCameraComponent.h"

AFortReplaySpectatorPawnBase::AFortReplaySpectatorPawnBase() {
    SpectatorCameraComponent = CreateDefaultSubobject<UFortSpectatorCameraComponent>(TEXT("SpectatorCameraComponent0"));
}

