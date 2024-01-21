#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortLinkedQuest.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FFortLinkedQuest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ObjectiveStatHandle;
    
    FORTNITEGAME_API FFortLinkedQuest();
};

