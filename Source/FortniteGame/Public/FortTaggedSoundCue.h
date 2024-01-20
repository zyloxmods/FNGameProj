#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTaggedSoundCue.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortTaggedSoundCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    FORTNITEGAME_API FFortTaggedSoundCue();
};

