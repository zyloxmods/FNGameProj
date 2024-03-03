#include "AthenaTravelLogEntry.h"

FAthenaTravelLogEntry::FAthenaTravelLogEntry() {
    this->Time = 1;
    this->Type = EAthenaTravelEventType::GroundMove;
    this->InstigatorPlayerType = EAthenaTravelLogPlayerType::Self;
    this->ReceiverPlayerType = EAthenaTravelLogPlayerType::Self;
    this->Value = 1;
}

