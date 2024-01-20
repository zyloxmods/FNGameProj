#include "FortWorkerType.h"

UFortWorkerType::UFortWorkerType() {
    this->Gender = EFortCustomGender::Female;
    this->bIsManager = false;
    this->MatchingPersonalityBonus = 1;
    this->MismatchingPersonalityPenalty = -1;
}

