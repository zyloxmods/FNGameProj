#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_AIBotSkillset.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_PlayerBotSkillset.generated.h"

class UFortAthenaAIBotWarmupSkillSet;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset : public UFortAthenaAISpawnerDataComponent_AIBotSkillset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotWarmupSkillSet> WarmUpSkillSet;
    
public:
    UFortAthenaAISpawnerDataComponent_PlayerBotSkillset();
};

