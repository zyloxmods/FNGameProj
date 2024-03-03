#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigestedRangedWeaponSkill.h"
#include "DigestedRangedWeaponSkillCategorySpecialization.h"
#include "DigestedRangedWeaponSkillCategory.generated.h"

USTRUCT(BlueprintType)
struct FDigestedRangedWeaponSkillCategory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDigestedRangedWeaponSkill WeaponSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDigestedRangedWeaponSkillCategorySpecialization> Specializations;
    
public:
    FORTNITEGAME_API FDigestedRangedWeaponSkillCategory();
};

