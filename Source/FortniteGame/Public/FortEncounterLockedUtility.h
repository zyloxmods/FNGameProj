#pragma once
#include "CoreMinimal.h"
#include "EFortAIUtility.h"
#include "EFortEncounterUtilityDesire.h"
#include "FortEncounterLockedUtility.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterLockedUtility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortAIUtility::Type> Utility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterUtilityDesire::Type> UtilityDesire;
    
    FORTNITEGAME_API FFortEncounterLockedUtility();
};

