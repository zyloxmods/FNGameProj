#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundSubmixSend.h"
#include "AudioAnalysisSpectralAnalysisSettings.generated.h"

USTRUCT(BlueprintType)
struct FAudioAnalysisSpectralAnalysisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundSubmixSpectralAnalysisBandSettings> BandSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecibalNoiseFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNormalize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoAutoRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRangeAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRangeReleaseTime;
    
    FORTNITEGAME_API FAudioAnalysisSpectralAnalysisSettings();
};

