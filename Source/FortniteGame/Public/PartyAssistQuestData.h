#pragma once
#include "CoreMinimal.h"
#include "PartyAssistObjectiveData.h"
#include "PartyAssistQuestData.generated.h"

class AFortPlayerState;
class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FPartyAssistQuestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* AssistedQuestDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* AssistedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentQuestStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QuestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartyAssistObjectiveData> Objectives;
    
    FORTNITEGAME_API FPartyAssistQuestData();
};

