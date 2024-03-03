#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeaponAccuracy.h"
#include "WeaponAccuracyCategorySpecialization.h"
#include "WeaponAccuracyCategory.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAccuracyCategory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAccuracy WeaponAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponAccuracyCategorySpecialization> Specializations;
    
public:
    FORTNITEGAME_API FWeaponAccuracyCategory();
};

