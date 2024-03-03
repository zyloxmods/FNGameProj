#include "FortAnimInput_PelvisAdjustment.h"

FFortAnimInput_PelvisAdjustment::FFortAnimInput_PelvisAdjustment() {
    this->PawnMesh = NULL;
    this->DistanceToFeet = 1;
    this->LegLength = 1;
    this->DesiredLegLengthTreshold = 1;
    this->DotProductBetweenUpVectorsTreshold = 1;
    this->PelvisInterpSpeed = 1;
    this->EmotePelvisOffsetInterpSpeed = 1;
    this->EmotePelvisOffsetAlpha = 1;
    this->PelvisBoneIndex = 0;
    this->FootLeftBoneIndex = 0;
    this->FootRightBoneIndex = 0;
}

