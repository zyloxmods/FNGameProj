#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "GameplayTagContainer.h"
#include "FortAIEncounterPawnDifficultyLevelModifier.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterPawnDifficultyLevelModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery EncounterTagRequirementsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle DifficultyLevelModifierCurve;
    
    FORTNITEGAME_API FFortAIEncounterPawnDifficultyLevelModifier();
};

