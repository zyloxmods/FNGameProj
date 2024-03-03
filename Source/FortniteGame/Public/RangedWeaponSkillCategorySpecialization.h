#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RangedWeaponSkill.h"
#include "RangedWeaponSkillCategorySpecialization.generated.h"

USTRUCT(BlueprintType)
struct FRangedWeaponSkillCategorySpecialization {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRangedWeaponSkill WeaponSkill;
    
public:
    FORTNITEGAME_API FRangedWeaponSkillCategorySpecialization();
};

