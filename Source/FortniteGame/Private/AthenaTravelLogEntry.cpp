#include "AthenaTravelLogEntry.h"

FAthenaTravelLogEntry::FAthenaTravelLogEntry() {
    Time = 1;
    Type = EAthenaTravelEventType::GroundMove;
    InstigatorPlayerType = EAthenaTravelLogPlayerType::Self;
    ReceiverPlayerType = EAthenaTravelLogPlayerType::Self;
    Value = 1;
}

