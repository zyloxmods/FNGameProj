#include "FortAnimInput_PelvisAdjustment.h"

FFortAnimInput_PelvisAdjustment::FFortAnimInput_PelvisAdjustment() {
    PawnMesh = NULL;
    DistanceToFeet = 1;
    LegLength = 1;
    DesiredLegLengthTreshold = 1;
    DotProductBetweenUpVectorsTreshold = 1;
    PelvisInterpSpeed = 1;
    EmotePelvisOffsetInterpSpeed = 1;
    EmotePelvisOffsetAlpha = 1;
    PelvisBoneIndex = 0;
    FootLeftBoneIndex = 0;
    FootRightBoneIndex = 0;
}

