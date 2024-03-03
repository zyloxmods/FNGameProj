#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Sound/SoundSubmixSend.h"
#include "Sound/SoundSubmixSend.h"
#include "AudioAnalysisSubmixAnalyzer.generated.h"

class UFortAudioAnalysisSettings;
class UFortAudioAnalysisSubsystem;
class USoundSubmix;

UCLASS(Blueprintable)
class UAudioAnalysisSubmixAnalyzer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubmixEnvelopeBP OnSubmixEnvelopeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubmixSpectralAnalysisBP OnSubmixSpectralAnalysisDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* Submix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAudioAnalysisSettings* AnalysisSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAudioAnalysisSubsystem* OwningSubsystem;
    
public:
    UAudioAnalysisSubmixAnalyzer();
    UFUNCTION(BlueprintCallable)
    void OnSubmixSpectralAnalysis(const TArray<float>& Amplitudes);
    
    UFUNCTION(BlueprintCallable)
    void OnSubmixEnvelope(const TArray<float>& Amplitudes);
    
};

