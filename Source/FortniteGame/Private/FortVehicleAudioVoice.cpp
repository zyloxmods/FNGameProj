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
    this->LoopingSound = NULL;
    this->bFadeWhenOwnerDestroyed = true;
    this->FadeTimeWhenOwnerDestroyed = 1;
    this->OneShotGateInterpSpeed = 1;
}

