#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AudioAnalysisParameterScalar.h"
#include "AudioAnalysisParameterVector.h"
#include "AudioAnalysisSpectralAnalysisSettings.h"
#include "Templates/SubclassOf.h"
#include "FortAudioAnalysisSettings.generated.h"

class UFortAudioAnalysisDebugWidget;
class USoundSubmix;

UCLASS(Blueprintable)
class UFortAudioAnalysisSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* DefaultAnalysisSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioAnalysisParameterScalar> ScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioAnalysisParameterVector> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioAnalysisSpectralAnalysisSettings SpectralAnalysisConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAudioAnalysisDebugWidget> DebugWidgetClass;
    
    UFortAudioAnalysisSettings();
};

