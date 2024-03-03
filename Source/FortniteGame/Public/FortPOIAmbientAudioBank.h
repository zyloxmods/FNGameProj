#pragma once
#include "CoreMinimal.h"
#include "AmbientAudioDataAsset.h"
#include "FortPOIAmbientAudioLoop.h"
#include "FortPOIAmbientAudioOneShot.h"
#include "FortPOIAmbientAudioBank.generated.h"

UCLASS(Blueprintable)
class UFortPOIAmbientAudioBank : public UAmbientAudioDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPOIAmbientAudioLoop Loops[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPOIAmbientAudioOneShot> Oneshots;
    
    UFortPOIAmbientAudioBank();
};

