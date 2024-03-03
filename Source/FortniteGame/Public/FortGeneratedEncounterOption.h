#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortGeneratedEncounterOption.generated.h"

class UFortDifficultyOptionCategoryEncounter;
class UFortDifficultyOptionEncounter;

USTRUCT(BlueprintType)
struct FFortGeneratedEncounterOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryEncounter* EncounterOptionCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDifficultyOptionEncounter> EncounterOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionEncounter* EncounterOptionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeLerpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangedSinceLastVLog;
    
    FORTNITEGAME_API FFortGeneratedEncounterOption();
};

