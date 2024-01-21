#include "FortAIDirectorEvent.h"

FFortAIDirectorEvent::FFortAIDirectorEvent() {
    this->Event = EFortAIDirectorEvent::PlayerAIEnemies;
    this->EventSource = NULL;
    this->EventTarget = NULL;
    this->EventValue = 0.00f;
}

