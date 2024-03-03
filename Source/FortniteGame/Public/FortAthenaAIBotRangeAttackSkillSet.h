#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotSkillSet.h"
#include "RangedWeaponSkillCategory.h"
#include "FortAthenaAIBotRangeAttackSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotRangeAttackSkillSet : public UFortAthenaAIBotSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRangedWeaponSkillCategory> RangedWeaponSkills;
    
public:
    UFortAthenaAIBotRangeAttackSkillSet();
};

