#pragma once
#include "CoreMinimal.h"
#include "FortEncounterTransitionSettings.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterTransitionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMaintainEncounterState;
    
    FORTNITEGAME_API FFortEncounterTransitionSettings();
};

