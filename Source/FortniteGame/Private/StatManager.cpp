#include "StatManager.h"

UStatManager::UStatManager() {
    this->Stats.AddDefaulted(69);
    this->StatPrefix = TEXT("STAT_");
    this->FPC = NULL;
}

