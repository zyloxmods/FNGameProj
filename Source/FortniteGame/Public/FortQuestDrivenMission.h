#pragma once
#include "CoreMinimal.h"
#include "FortGlobalMission.h"
#include "FortQuestDrivenMission.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FFortQuestDrivenMission : public FFortGlobalMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* RequiredQuest;
    
    FORTNITEGAME_API FFortQuestDrivenMission();
};

