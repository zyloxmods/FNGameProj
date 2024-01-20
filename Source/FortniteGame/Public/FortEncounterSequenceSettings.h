#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortEncounterProfile.h"
#include "FortEncounterTransitionSettings.h"
#include "FortEncounterSequenceSettings.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterSequenceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterTransitionSettings TransitionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortEncounterProfile> EncounterSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SequenceTags;
    
    FORTNITEGAME_API FFortEncounterSequenceSettings();
};

