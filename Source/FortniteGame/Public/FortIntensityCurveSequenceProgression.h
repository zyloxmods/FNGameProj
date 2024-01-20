#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortInstensityCurveSequenceProgression.h"
#include "FortIntensityCurveSequenceProgression.generated.h"

UCLASS(Blueprintable)
class UFortIntensityCurveSequenceProgression : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortInstensityCurveSequenceProgression> IntensityCurveSequences;
    
public:
    UFortIntensityCurveSequenceProgression();
};

