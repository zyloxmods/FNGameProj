#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_UtilitiesFree.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_UtilitiesFree : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFreeUtilitySlots;
    
public:
    UFortDifficultyOptionEncounter_UtilitiesFree();
};

