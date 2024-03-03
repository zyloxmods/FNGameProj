#include "FortAudioAnalysisSubsystem.h"

void UFortAudioAnalysisSubsystem::UnRegisterSubmix(USoundSubmix* InSubmix) {
}

void UFortAudioAnalysisSubsystem::UnRegisterDefaultSubmix() {
}

void UFortAudioAnalysisSubsystem::RegisterSubmix(USoundSubmix* InSubmix) {
}

void UFortAudioAnalysisSubsystem::RegisterDefaultSubmix() {
}

UAudioAnalysisSubmixAnalyzer* UFortAudioAnalysisSubsystem::GetAnalyzerForSubmix(USoundSubmix* InSubmix) {
    return NULL;
}

UFortAudioAnalysisSettings* UFortAudioAnalysisSubsystem::GetAnalysisSettings() const {
    return NULL;
}

UFortAudioAnalysisSubsystem::UFortAudioAnalysisSubsystem() {
    this->AudioAnalysisSettings = NULL;
    this->DebugWidget = NULL;
}

