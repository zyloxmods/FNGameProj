#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponCoreAnimation.h"
#include "FortPatrolAnimSetWeaponPair.generated.h"

class UFortPatrolAnimAsset;

USTRUCT(BlueprintType)
struct FFortPatrolAnimSetWeaponPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortWeaponCoreAnimation::Type> WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPatrolAnimAsset* DataAsset;
    
    FORTNITEGAME_API FFortPatrolAnimSetWeaponPair();
};

