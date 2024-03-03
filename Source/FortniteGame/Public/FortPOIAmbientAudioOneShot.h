#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortDayPhase.h"
#include "FortPOIAmbientAudioOneShot.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortPOIAmbientAudioOneShot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> OneShotSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RetriggerTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TriggerDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortDayPhase> AllowedDayPhases;
    
    FORTNITEGAME_API FFortPOIAmbientAudioOneShot();
};

