#pragma once
#include "CoreMinimal.h"
#include "PartyMemberAssistedChallengeInfo.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FPartyMemberAssistedChallengeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectivesCompleted;
    
    FORTNITEGAME_API FPartyMemberAssistedChallengeInfo();
};

