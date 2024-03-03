#pragma once
#include "CoreMinimal.h"
#include "EFortQuestState.h"
#include "ObjectiveRequirement.h"
#include "QuestRequirement.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FQuestRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestState DesiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectiveRequirement> Objectives;
    
    FORTNITEGAME_API FQuestRequirement();
};

