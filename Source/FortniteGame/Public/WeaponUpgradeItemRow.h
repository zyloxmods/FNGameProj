#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortWeaponUpgradeCosts.h"
#include "EFortWeaponUpgradeDirection.h"
#include "WeaponUpgradeItemRow.generated.h"

class UFortWeaponRangedItemDefinition;

USTRUCT(BlueprintType)
struct FWeaponUpgradeItemRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponRangedItemDefinition* CurrentWeaponDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponRangedItemDefinition* UpgradedWeaponDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWeaponUpgradeCosts WoodCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWeaponUpgradeCosts MetalCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWeaponUpgradeCosts BrickCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWeaponUpgradeDirection Direction;
    
    FORTNITEGAME_API FWeaponUpgradeItemRow();
};

