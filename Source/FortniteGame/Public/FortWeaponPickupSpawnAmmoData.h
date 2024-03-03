#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttributeSet.h"
#include "SourceToAmmoMultiplierOverrideData.h"
#include "WeaponPickupAmmoCountData.h"
#include "WeaponPickupAmmoMultiplierOverrideData.h"
#include "FortWeaponPickupSpawnAmmoData.generated.h"

UCLASS(Blueprintable)
class UFortWeaponPickupSpawnAmmoData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponPickupAmmoCountData> WeaponPickupAmmoCountArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultWeaponAmmoMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponPickupAmmoMultiplierOverrideData> WeaponPickupAmmoMultiplierOverrideArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSourceToAmmoMultiplierOverrideData> SourceToAmmoMultiplierOverrideArray;
    
public:
    UFortWeaponPickupSpawnAmmoData();
};

