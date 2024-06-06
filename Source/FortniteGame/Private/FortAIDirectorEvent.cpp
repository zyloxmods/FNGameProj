#include "FortAIDirectorEvent.h"

FFortAIDirectorEvent::FFortAIDirectorEvent() {
    Event = EFortAIDirectorEvent::PlayerAIEnemies;
    EventSource = NULL;
    EventTarget = NULL;
    EventValue = 1;
}

