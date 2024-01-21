#pragma once
#include "CoreMinimal.h"
#include "GooseWeaponTierData.generated.h"

class UFortWeaponItemDefinition;

USTRUCT(BlueprintType)
struct FGooseWeaponTierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWeaponItemDefinition*> WeaponItemDefinitions;
    
    FORTNITEGAME_API FGooseWeaponTierData();
};

