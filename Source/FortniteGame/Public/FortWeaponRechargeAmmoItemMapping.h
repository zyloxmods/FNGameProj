#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponRechargeAmmoMappingData.h"
#include "FortWeaponRechargeAmmoItemMapping.generated.h"

UCLASS(Blueprintable)
class UFortWeaponRechargeAmmoItemMapping : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponRechargeAmmoMappingData> WeaponRechargeAmmoMappingData;
    
public:
    UFortWeaponRechargeAmmoItemMapping();
};

