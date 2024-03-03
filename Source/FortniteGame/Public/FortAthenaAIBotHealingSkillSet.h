#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotSkillSet.h"
#include "FortBotHealingItems.h"
#include "FortAthenaAIBotHealingSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotHealingSkillSet : public UFortAthenaAIBotSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBotHealingItems> HealthItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBotHealingItems> ShieldItems;
    
public:
    UFortAthenaAIBotHealingSkillSet();
};

