#include "AudioAnalysisSubmixAnalyzer.h"

void UAudioAnalysisSubmixAnalyzer::OnSubmixSpectralAnalysis(const TArray<float>& Amplitudes) {
}

void UAudioAnalysisSubmixAnalyzer::OnSubmixEnvelope(const TArray<float>& Amplitudes) {
}

UAudioAnalysisSubmixAnalyzer::UAudioAnalysisSubmixAnalyzer() {
    Submix = NULL;
    AnalysisSettings = NULL;
    OwningSubsystem = NULL;
}

