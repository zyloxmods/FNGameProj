#include "AudioAnalysisSubmixAnalyzer.h"

void UAudioAnalysisSubmixAnalyzer::OnSubmixSpectralAnalysis(const TArray<float>& Amplitudes) {
}

void UAudioAnalysisSubmixAnalyzer::OnSubmixEnvelope(const TArray<float>& Amplitudes) {
}

UAudioAnalysisSubmixAnalyzer::UAudioAnalysisSubmixAnalyzer() {
    this->Submix = NULL;
    this->AnalysisSettings = NULL;
    this->OwningSubsystem = NULL;
}

