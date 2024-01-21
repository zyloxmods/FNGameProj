#include "FortEffectDistanceQuality.h"

FFortEffectDistanceQuality::FFortEffectDistanceQuality() {
    this->MinDistanceCinematic = 0.00f;
    this->MinDistanceEpic = 0.00f;
    this->MinDistanceHigh = 0.00f;
    this->MinDistanceMedium = 0.00f;
    this->MinDistanceLow = 0.00f;
    this->bAllowCinematic = false;
    this->bAllowEpic = false;
    this->bAllowHigh = false;
    this->bAllowMedium = false;
    this->bAllowLow = false;
}

