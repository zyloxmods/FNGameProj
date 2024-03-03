#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "WeaponRechargeAmmoMappingData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponRechargeAmmoMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagOnPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> WeaponIds;
    
    FORTNITEGAME_API FWeaponRechargeAmmoMappingData();
};

