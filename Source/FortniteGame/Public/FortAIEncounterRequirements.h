#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortMissionType.h"
#include "FortAIEncounterRequirements.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterRequirements {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortMissionType::Type> AssociatedMissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
public:
    FORTNITEGAME_API FFortAIEncounterRequirements();
};

