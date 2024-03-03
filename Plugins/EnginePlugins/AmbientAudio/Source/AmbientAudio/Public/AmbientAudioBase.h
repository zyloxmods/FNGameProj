#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AmbientAudioBase.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct AMBIENTAUDIO_API FAmbientAudioBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Requirements;
    
    FAmbientAudioBase();
};

