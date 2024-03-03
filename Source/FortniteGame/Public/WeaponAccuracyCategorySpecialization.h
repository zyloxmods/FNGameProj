#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeaponAccuracy.h"
#include "WeaponAccuracyCategorySpecialization.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAccuracyCategorySpecialization {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAccuracy WeaponAccuracy;
    
public:
    FORTNITEGAME_API FWeaponAccuracyCategorySpecialization();
};

