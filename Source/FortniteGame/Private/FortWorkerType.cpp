#include "FortWorkerType.h"

UFortWorkerType::UFortWorkerType(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    Gender = EFortCustomGender::Female;
    bIsManager = false;
    MatchingPersonalityBonus = 0;
    MismatchingPersonalityPenalty = 0;
}

