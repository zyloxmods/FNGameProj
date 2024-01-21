#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortPOIAmbientAudioLoop.h"
#include "FortPOIAmbientAudioOneShot.h"
#include "FortPOIAmbientAudioBank.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPOIAmbientAudioBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPOIAmbientAudioLoop Loops[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPOIAmbientAudioOneShot> OneShots;
    
    UFortPOIAmbientAudioBank();
};

