#include "FortReplaySpectatorPawnBase.h"
#include "FortSpectatorCameraComponent.h"

AFortReplaySpectatorPawnBase::AFortReplaySpectatorPawnBase() {
    this->SpectatorCameraComponent = CreateDefaultSubobject<UFortSpectatorCameraComponent>(TEXT("SpectatorCameraComponent0"));
}

