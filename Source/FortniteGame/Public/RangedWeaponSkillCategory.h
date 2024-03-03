#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RangedWeaponSkill.h"
#include "RangedWeaponSkillCategorySpecialization.h"
#include "RangedWeaponSkillCategory.generated.h"

USTRUCT(BlueprintType)
struct FRangedWeaponSkillCategory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRangedWeaponSkill WeaponSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRangedWeaponSkillCategorySpecialization> Specializations;
    
public:
    FORTNITEGAME_API FRangedWeaponSkillCategory();
};

