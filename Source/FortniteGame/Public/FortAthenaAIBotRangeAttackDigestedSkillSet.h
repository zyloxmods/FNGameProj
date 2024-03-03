#pragma once
#include "CoreMinimal.h"
#include "DigestedRangedWeaponSkillCategory.h"
#include "FortAthenaAIBotDigestedSkillSet.h"
#include "FortAthenaAIBotRangeAttackDigestedSkillSet.generated.h"

class AFortWeapon;

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIBotRangeAttackDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* CachedWeaponUsedToCalculateSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDigestedRangedWeaponSkillCategory> RangedWeaponCategorySkills;
    
public:
    UFortAthenaAIBotRangeAttackDigestedSkillSet();
};

