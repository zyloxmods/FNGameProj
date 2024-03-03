#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnSpectralAnalysisUpdatedDelegate.generated.h"

class USoundSubmix;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSpectralAnalysisUpdated, USoundSubmix*, Submix, const TArray<float>&, Amplitudes, const TArray<FLinearColor>&, Colors);

