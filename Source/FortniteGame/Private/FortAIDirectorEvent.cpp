#include "FortAIDirectorEvent.h"

FFortAIDirectorEvent::FFortAIDirectorEvent() {
    this->Event = EFortAIDirectorEvent::PlayerAIEnemies;
    this->EventSource = NULL;
    this->EventTarget = NULL;
    this->EventValue = 1;
}

