#include "AthenaTravelLogEntry.h"

FAthenaTravelLogEntry::FAthenaTravelLogEntry() {
    this->Time = 0.00f;
    this->Type = EAthenaTravelEventType::GroundMove;
    this->InstigatorPlayerType = EAthenaTravelLogPlayerType::Self;
    this->ReceiverPlayerType = EAthenaTravelLogPlayerType::Self;
    this->Value = 0.00f;
}

