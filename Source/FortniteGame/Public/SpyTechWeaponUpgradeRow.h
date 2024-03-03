#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpyTechWeaponUpgradeRow.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FSpyTechWeaponUpgradeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> UpgradedItemToGrant;
    
    FORTNITEGAME_API FSpyTechWeaponUpgradeRow();
};

