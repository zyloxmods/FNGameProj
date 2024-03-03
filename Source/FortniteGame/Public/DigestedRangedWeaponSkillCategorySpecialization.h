#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigestedRangedWeaponSkill.h"
#include "DigestedRangedWeaponSkillCategorySpecialization.generated.h"

USTRUCT(BlueprintType)
struct FDigestedRangedWeaponSkillCategorySpecialization {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDigestedRangedWeaponSkill WeaponSkill;
    
public:
    FORTNITEGAME_API FDigestedRangedWeaponSkillCategorySpecialization();
};

