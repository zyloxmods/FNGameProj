#include "FortExperienceDelta.h"

FFortExperienceDelta::FFortExperienceDelta() {
    this->Level = 0;
    this->Xp = 0;
    this->BaseXPEarned = 0;
    this->BonusXPEarned = 0;
    this->BoostXPEarned = 0;
    this->BoostXPMissed = 0;
    this->RestXPEarned = 0;
    this->GroupBoostXPEarned = 0;
    this->IsFinalXpUpdate = EFortIsFinalXpUpdate::Uninitialized;
}

