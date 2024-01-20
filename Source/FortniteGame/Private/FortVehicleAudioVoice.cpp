#include "FortVehicleAudioVoice.h"

void UFortVehicleAudioVoice::StopAllAudio() {
}

void UFortVehicleAudioVoice::SetParamRange(float Min, float Max) {
}

void UFortVehicleAudioVoice::SetParamExplicit(FName Name, float Param) {
}

void UFortVehicleAudioVoice::SetParam(float Param) {
}

UFortVehicleAudioVoice::UFortVehicleAudioVoice() {
    this->LoopingSound = NULL;
    this->bFadeWhenOwnerDestroyed = true;
    this->FadeTimeWhenOwnerDestroyed = 0.50f;
    this->OneShotGateInterpSpeed = 10.00f;
}

