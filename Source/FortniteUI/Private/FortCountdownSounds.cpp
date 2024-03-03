#include "FortCountdownSounds.h"

FFortCountdownSounds::FFortCountdownSounds() {
    this->Sound = NULL;
    this->StartTime = 0;
    this->StopTime = 0;
    this->FadeOutTime = 1;
    this->bPlayed = false;
    this->PlayInstance = NULL;
}

