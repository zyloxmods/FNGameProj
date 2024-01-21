#pragma once
#include "CoreMinimal.h"
#include "HordeDifficultyTierInfo.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FHordeDifficultyTierInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DifficultyTierName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestPrerequisite;
    
    FORTNITEGAME_API FHordeDifficultyTierInfo();
};

