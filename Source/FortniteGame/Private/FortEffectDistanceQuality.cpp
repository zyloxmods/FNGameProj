#include "FortEffectDistanceQuality.h"

FFortEffectDistanceQuality::FFortEffectDistanceQuality() {
    this->MinDistanceCinematic = 1;
    this->MinDistanceEpic = 1;
    this->MinDistanceHigh = 1;
    this->MinDistanceMedium = 1;
    this->MinDistanceLow = 1;
    this->bAllowCinematic = false;
    this->bAllowEpic = false;
    this->bAllowHigh = false;
    this->bAllowMedium = false;
    this->bAllowLow = false;
}

