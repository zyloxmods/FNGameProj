#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortEncounterTransitionSettings.h"
#include "FortGeneratedEncounterSequence.generated.h"

USTRUCT(BlueprintType)
struct FFortGeneratedEncounterSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterTransitionSettings TransitionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingGeneratedEncounterProfileIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEncountersInSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EncounterSequenceTags;
    
    FORTNITEGAME_API FFortGeneratedEncounterSequence();
};

