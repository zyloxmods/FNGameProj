#pragma once
#include "CoreMinimal.h"
#include "GunGamePlayerData.generated.h"

class UFortWeaponItemDefinition;

USTRUCT(BlueprintType)
struct FGunGamePlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWeaponItemDefinition*> CurrentlyAssignedWeapons;
    
    FORTNITEGAME_API FGunGamePlayerData();
};

