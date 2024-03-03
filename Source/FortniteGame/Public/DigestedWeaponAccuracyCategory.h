#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigestedWeaponAccuracy.h"
#include "DigestedWeaponAccuracyCategorySpecialization.h"
#include "DigestedWeaponAccuracyCategory.generated.h"

USTRUCT(BlueprintType)
struct FDigestedWeaponAccuracyCategory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDigestedWeaponAccuracy WeaponAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDigestedWeaponAccuracyCategorySpecialization> Specializations;
    
public:
    FORTNITEGAME_API FDigestedWeaponAccuracyCategory();
};

