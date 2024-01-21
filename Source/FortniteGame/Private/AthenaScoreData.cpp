#include "AthenaScoreData.h"

FAthenaScoreData::FAthenaScoreData() {
    this->ScoringEvent = EAthenaScoringEvent::None;
    this->NumOccurrencesForScore = 0;
    this->NumOccurrencesPermitted = 0;
}

