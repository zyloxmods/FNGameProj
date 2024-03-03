#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigestedWeaponAccuracy.h"
#include "DigestedWeaponAccuracyCategorySpecialization.generated.h"

USTRUCT(BlueprintType)
struct FDigestedWeaponAccuracyCategorySpecialization {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDigestedWeaponAccuracy WeaponAccuracy;
    
public:
    FORTNITEGAME_API FDigestedWeaponAccuracyCategorySpecialization();
};

