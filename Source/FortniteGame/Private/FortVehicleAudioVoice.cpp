#include "FortVehicleAudioVoice.h"

void UFortVehicleAudioVoice::StopAllAudio() {
}

void UFortVehicleAudioVoice::SetParamRange(float min, float max) {
}

void UFortVehicleAudioVoice::SetParamExplicit(FName Name, float Param) {
}

void UFortVehicleAudioVoice::SetParam(float Param) {
}

UFortVehicleAudioVoice::UFortVehicleAudioVoice() {
    LoopingSound = NULL;
    bFadeWhenOwnerDestroyed = true;
    FadeTimeWhenOwnerDestroyed = 1;
    OneShotGateInterpSpeed = 1;
}

